public static class NotateNumber
{
    public static string Transform(long originNumber)
    {
        string[] symbol = new string[] { "K", "M", "G", "T", "P", "E", "Z" };

        string result = originNumber.ToString();

        // 4자리 넘어가지 않으면 그대로 표기
        if(result.Length < 4)
        {
            return result;
        }

        for(int i = 0; i < symbol.Length; i++)
        {
            // 3자리씩 묶어서 어떤 symbol의 범위에 속하는지 판별
            if(4 + 3 * i <= result.Length && result.Length < 4 + 3 * (i + 1))
            {
                // n은 앞자리 개수
                // 3자리씩 단위가 떨어지기 때문에 3으로 나눈 값의 나머지로
                // 앞자리에 표기할 숫자의 개수를 정한다.
                int n = result.Length % 3;

                n = n == 0 ? 3 : n;

                result = $"{result.Substring(0, n)}.{result.Substring(n, 1)}";

                result += symbol[i];
                break;
            }
        }

        return result;
    }
}