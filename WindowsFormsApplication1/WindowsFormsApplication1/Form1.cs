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

        public int num1, num2, sum = 0;

        private void clearResultBox(object sender, EventArgs e)
        {
            resultbox.Text = "";
        }

        private bool toggleOperationButtons(bool status)
        {
            divide.Enabled = status;
            multiple.Enabled = status;
            plus.Enabled = status;
            minus.Enabled = status;
            result.Enabled = !status;
            return status;
        }

        private void plus_Click(object sender, EventArgs e)
        {
            operation = 1;
            num1 = Int32.Parse(resultbox.Text);
            toggleOperationButtons(false);
            clearResultBox(sender, e);
        }

        private void minus_Click(object sender, EventArgs e)
        {
            operation = 2;
            num1 = Int32.Parse(resultbox.Text);
            toggleOperationButtons(false);
            clearResultBox(sender, e);
        }

        private void multiple_Click(object sender, EventArgs e)
        {
            operation = 3;
            num1 = Int32.Parse(resultbox.Text);
            toggleOperationButtons(false);
            clearResultBox(sender, e);
        }

        private void divide_Click(object sender, EventArgs e)
        {
            operation = 4;
            num1 = Int32.Parse(resultbox.Text);
            toggleOperationButtons(false);
            clearResultBox(sender, e);
        }

        private void result_Click(object sender, EventArgs e)
        {
            num2 = Int32.Parse(resultbox.Text);
            clearResultBox(sender, e);
            switch (operation)
            {
                case 1:
                {
                    sum = num1 + num2;
                    resultbox.Text = sum.ToString();
                    break;
                }
                case 2:
                {
                    sum = num1 - num2;
                    resultbox.Text = sum.ToString();
                    break;
                }
                case 3:
                {
                    sum = num1 * num2;
                    resultbox.Text = sum.ToString();
                    break;
                }
                case 4:
                {
                    sum = num1 / num2;
                    resultbox.Text = sum.ToString();
                    break;
                }
            }
            toggleOperationButtons(true);
        }

        public int operation = 0;
        /// <summary>
        /// 1 - сумма
        /// 2 - разница
        /// 3 - деление
        /// 4 - умножение
        /// </summary>

        public void numberClicked(object sender, EventArgs e)
        {
            string num_str = ((System.Windows.Forms.Button)sender).Text;
            resultbox.Text += num_str;
        }
    }
}
