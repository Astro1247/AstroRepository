using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            int num1, num2, res;
            num1 = Int32.Parse(num1_box.Text);
            num2 = Int32.Parse(num2_box.Text);
            int operation = 0;
            /// <summary>
            /// 1 - сумма
            /// 2 - разница
            /// 3 - умножение
            /// 4 - деление
            /// 0 - NULL
            /// </summary>
            switch (comboBox1.Text)
            {
                case "+":
                {
                    operation = 1;
                    res = num1 + num2;
                    break;
                }
                case "-":
                {
                    operation = 2;
                    res = num1 - num2;
                    break;
                }
                case "*":
                {
                    operation = 3;
                    res = num1*num2;
                    break;
                }
                case "/":
                {
                    operation = 4;
                    res = num1/num2;
                    break;
                }
                default:
                {
                    operation = 1;
                    res = num1 + num2;
                    break;
                }
            }
            resultBtn.Text = res.ToString();
        }
    }
}
