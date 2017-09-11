namespace WindowsFormsApplication1
{
    partial class Form1
    {
        /// <summary>
        /// Обязательная переменная конструктора.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Освободить все используемые ресурсы.
        /// </summary>
        /// <param name="disposing">истинно, если управляемый ресурс должен быть удален; иначе ложно.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Код, автоматически созданный конструктором форм Windows

        /// <summary>
        /// Требуемый метод для поддержки конструктора — не изменяйте 
        /// содержимое этого метода с помощью редактора кода.
        /// </summary>
        private void InitializeComponent()
        {
            this.num_7 = new System.Windows.Forms.Button();
            this.num_8 = new System.Windows.Forms.Button();
            this.num_9 = new System.Windows.Forms.Button();
            this.num_4 = new System.Windows.Forms.Button();
            this.num_5 = new System.Windows.Forms.Button();
            this.num_6 = new System.Windows.Forms.Button();
            this.num_1 = new System.Windows.Forms.Button();
            this.num_2 = new System.Windows.Forms.Button();
            this.num_3 = new System.Windows.Forms.Button();
            this.num_0 = new System.Windows.Forms.Button();
            this.num_dot = new System.Windows.Forms.Button();
            this.num_c = new System.Windows.Forms.Button();
            this.plus = new System.Windows.Forms.Button();
            this.minus = new System.Windows.Forms.Button();
            this.multiple = new System.Windows.Forms.Button();
            this.divide = new System.Windows.Forms.Button();
            this.result = new System.Windows.Forms.Button();
            this.resultbox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // num_7
            // 
            this.num_7.Location = new System.Drawing.Point(13, 38);
            this.num_7.Name = "num_7";
            this.num_7.Size = new System.Drawing.Size(30, 30);
            this.num_7.TabIndex = 0;
            this.num_7.Text = "7";
            this.num_7.UseVisualStyleBackColor = true;
            this.num_7.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_8
            // 
            this.num_8.Location = new System.Drawing.Point(49, 38);
            this.num_8.Name = "num_8";
            this.num_8.Size = new System.Drawing.Size(30, 30);
            this.num_8.TabIndex = 1;
            this.num_8.Text = "8";
            this.num_8.UseVisualStyleBackColor = true;
            this.num_8.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_9
            // 
            this.num_9.Location = new System.Drawing.Point(85, 38);
            this.num_9.Name = "num_9";
            this.num_9.Size = new System.Drawing.Size(30, 30);
            this.num_9.TabIndex = 2;
            this.num_9.Text = "9";
            this.num_9.UseVisualStyleBackColor = true;
            this.num_9.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_4
            // 
            this.num_4.Location = new System.Drawing.Point(13, 74);
            this.num_4.Name = "num_4";
            this.num_4.Size = new System.Drawing.Size(30, 30);
            this.num_4.TabIndex = 3;
            this.num_4.Text = "4";
            this.num_4.UseVisualStyleBackColor = true;
            this.num_4.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_5
            // 
            this.num_5.Location = new System.Drawing.Point(49, 74);
            this.num_5.Name = "num_5";
            this.num_5.Size = new System.Drawing.Size(30, 30);
            this.num_5.TabIndex = 4;
            this.num_5.Text = "5";
            this.num_5.UseVisualStyleBackColor = true;
            this.num_5.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_6
            // 
            this.num_6.Location = new System.Drawing.Point(85, 74);
            this.num_6.Name = "num_6";
            this.num_6.Size = new System.Drawing.Size(30, 30);
            this.num_6.TabIndex = 5;
            this.num_6.Text = "6";
            this.num_6.UseVisualStyleBackColor = true;
            this.num_6.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_1
            // 
            this.num_1.Location = new System.Drawing.Point(12, 110);
            this.num_1.Name = "num_1";
            this.num_1.Size = new System.Drawing.Size(30, 30);
            this.num_1.TabIndex = 6;
            this.num_1.Text = "1";
            this.num_1.UseVisualStyleBackColor = true;
            this.num_1.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_2
            // 
            this.num_2.Location = new System.Drawing.Point(48, 110);
            this.num_2.Name = "num_2";
            this.num_2.Size = new System.Drawing.Size(30, 30);
            this.num_2.TabIndex = 7;
            this.num_2.Text = "2";
            this.num_2.UseVisualStyleBackColor = true;
            this.num_2.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_3
            // 
            this.num_3.Location = new System.Drawing.Point(84, 110);
            this.num_3.Name = "num_3";
            this.num_3.Size = new System.Drawing.Size(30, 30);
            this.num_3.TabIndex = 8;
            this.num_3.Text = "3";
            this.num_3.UseVisualStyleBackColor = true;
            this.num_3.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_0
            // 
            this.num_0.Location = new System.Drawing.Point(48, 146);
            this.num_0.Name = "num_0";
            this.num_0.Size = new System.Drawing.Size(30, 30);
            this.num_0.TabIndex = 9;
            this.num_0.Text = "0";
            this.num_0.UseVisualStyleBackColor = true;
            this.num_0.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_dot
            // 
            this.num_dot.Enabled = false;
            this.num_dot.Location = new System.Drawing.Point(85, 146);
            this.num_dot.Name = "num_dot";
            this.num_dot.Size = new System.Drawing.Size(30, 30);
            this.num_dot.TabIndex = 10;
            this.num_dot.Text = ",";
            this.num_dot.UseVisualStyleBackColor = true;
            this.num_dot.Visible = false;
            this.num_dot.Click += new System.EventHandler(this.numberClicked);
            // 
            // num_c
            // 
            this.num_c.Location = new System.Drawing.Point(13, 146);
            this.num_c.Name = "num_c";
            this.num_c.Size = new System.Drawing.Size(30, 30);
            this.num_c.TabIndex = 11;
            this.num_c.Text = "С";
            this.num_c.UseVisualStyleBackColor = true;
            this.num_c.Click += new System.EventHandler(this.clearResultBox);
            // 
            // plus
            // 
            this.plus.Location = new System.Drawing.Point(121, 38);
            this.plus.Name = "plus";
            this.plus.Size = new System.Drawing.Size(30, 30);
            this.plus.TabIndex = 12;
            this.plus.Text = "+";
            this.plus.UseVisualStyleBackColor = true;
            this.plus.Click += new System.EventHandler(this.plus_Click);
            // 
            // minus
            // 
            this.minus.Location = new System.Drawing.Point(121, 74);
            this.minus.Name = "minus";
            this.minus.Size = new System.Drawing.Size(30, 30);
            this.minus.TabIndex = 13;
            this.minus.Text = "-";
            this.minus.UseVisualStyleBackColor = true;
            this.minus.Click += new System.EventHandler(this.minus_Click);
            // 
            // multiple
            // 
            this.multiple.Location = new System.Drawing.Point(121, 110);
            this.multiple.Name = "multiple";
            this.multiple.Size = new System.Drawing.Size(30, 30);
            this.multiple.TabIndex = 14;
            this.multiple.Text = "*";
            this.multiple.UseVisualStyleBackColor = true;
            this.multiple.Click += new System.EventHandler(this.multiple_Click);
            // 
            // divide
            // 
            this.divide.Location = new System.Drawing.Point(121, 146);
            this.divide.Name = "divide";
            this.divide.Size = new System.Drawing.Size(30, 30);
            this.divide.TabIndex = 15;
            this.divide.Text = "/";
            this.divide.UseVisualStyleBackColor = true;
            this.divide.Click += new System.EventHandler(this.divide_Click);
            // 
            // result
            // 
            this.result.Enabled = false;
            this.result.Location = new System.Drawing.Point(157, 38);
            this.result.Name = "result";
            this.result.Size = new System.Drawing.Size(37, 138);
            this.result.TabIndex = 16;
            this.result.Text = "=";
            this.result.UseVisualStyleBackColor = true;
            this.result.Click += new System.EventHandler(this.result_Click);
            // 
            // resultbox
            // 
            this.resultbox.Location = new System.Drawing.Point(13, 12);
            this.resultbox.Name = "resultbox";
            this.resultbox.Size = new System.Drawing.Size(181, 20);
            this.resultbox.TabIndex = 17;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(211, 187);
            this.Controls.Add(this.resultbox);
            this.Controls.Add(this.result);
            this.Controls.Add(this.divide);
            this.Controls.Add(this.multiple);
            this.Controls.Add(this.minus);
            this.Controls.Add(this.plus);
            this.Controls.Add(this.num_c);
            this.Controls.Add(this.num_dot);
            this.Controls.Add(this.num_0);
            this.Controls.Add(this.num_3);
            this.Controls.Add(this.num_2);
            this.Controls.Add(this.num_1);
            this.Controls.Add(this.num_6);
            this.Controls.Add(this.num_5);
            this.Controls.Add(this.num_4);
            this.Controls.Add(this.num_9);
            this.Controls.Add(this.num_8);
            this.Controls.Add(this.num_7);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Form1";
            this.Text = "Calculator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Button num_7;
        private System.Windows.Forms.Button num_8;
        private System.Windows.Forms.Button num_9;
        private System.Windows.Forms.Button num_4;
        private System.Windows.Forms.Button num_5;
        private System.Windows.Forms.Button num_6;
        private System.Windows.Forms.Button num_1;
        private System.Windows.Forms.Button num_2;
        private System.Windows.Forms.Button num_3;
        private System.Windows.Forms.Button num_0;
        private System.Windows.Forms.Button num_dot;
        private System.Windows.Forms.Button num_c;
        private System.Windows.Forms.Button plus;
        private System.Windows.Forms.Button minus;
        private System.Windows.Forms.Button multiple;
        private System.Windows.Forms.Button divide;
        private System.Windows.Forms.Button result;
        private System.Windows.Forms.TextBox resultbox;
    }
}

