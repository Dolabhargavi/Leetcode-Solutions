class Solution
{
    public:
        string intToRoman(int num)
        {
            string s = "";
            unordered_map<int, char> m;
            m[1] = 'I', m[5] = 'V', m[10] = 'X', m[50] = 'L', m[100] = 'C', m[500] = 'D', m[1000] = 'M';
            while (num)
            {
                if (num >= 1000)
                {
                    s += m[1000];
                    num -= 1000;
                }
                else if (num >= 900)
                {
                    s += m[100];
                    s += m[1000];
                    num -= 900;
                }
                else if (num >= 500)
                {
                    s += m[500];
                    num -= 500;
                }
                else if (num >= 400)
                {
                    s += m[100];
                    s += m[500];
                    num -= 400;
                }
                else if (num >= 100)
                {
                    s += m[100];
                    num -= 100;
                }
                else if (num >= 90)
                {
                    s += m[10];
                    s += m[100];
                    num -= 90;
                }
                else if (num >= 50)
                {
                    s += m[50];
                    num -= 50;
                }
                else if (num >= 40)
                {
                    s += m[10];
                    s += m[50];
                    num -= 40;
                }
                else if (num >= 10)
                {
                    s += m[10];
                    num -= 10;
                }
                else if (num >= 9)
                {
                    s += m[1];
                    s += m[10];
                    num -= 9;
                }
                else if (num >= 5)
                {
                    s += m[5];
                    num -= 5;
                }
                else if (num >= 4)
                {
                    s += m[1];
                    s += m[5];
                    num -= 4;
                }
                else
                {
                    s += m[1];
                    num--;
                }
            }
            return s;
        }
};