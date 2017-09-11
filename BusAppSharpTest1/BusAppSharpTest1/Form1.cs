using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;



namespace BusAppSharpTest1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public void moveMouse(int x, int y)
        {
            Win32.POINT p = new Win32.POINT();
            p.x = Convert.ToInt16(x);
            p.y = Convert.ToInt16(y);

            Win32.ClientToScreen(this.Handle, ref p);
            Win32.SetCursorPos(p.x, p.y);
        }

        public bool dir = false;
        public int x = 100, y = 100;

        private void timer1_Tick(object sender, EventArgs e)
        {
            if (x < 500 && !dir)
            {
                x++;
            }
            else if (x == 500 && y < 500 && !dir)
            {
                y++;
                if (y == 500)
                    dir = true;
            }
            else if (x > 100 && dir)
            {
                x--;
            }
            else if (x == 100 && y > 100 && dir)
            {
                y--;
                if (y == 100)
                    dir = false;
            }
            moveMouse(x, y);
        }
    }
}

public class Win32
{
    [DllImport("User32.Dll")]
    public static extern long SetCursorPos(int x, int y);

    [DllImport("User32.Dll")]
    public static extern bool ClientToScreen(IntPtr hWnd, ref POINT point);

    [StructLayout(LayoutKind.Sequential)]
    public struct POINT
    {
        public int x;
        public int y;
    }
}