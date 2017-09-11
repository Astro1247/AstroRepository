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
            this.num1_box = new System.Windows.Forms.TextBox();
            this.comboBox1 = new System.Windows.Forms.ComboBox();
            this.num2_box = new System.Windows.Forms.TextBox();
            this.resultBtn = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // num1_box
            // 
            this.num1_box.Location = new System.Drawing.Point(13, 13);
            this.num1_box.Name = "num1_box";
            this.num1_box.Size = new System.Drawing.Size(100, 20);
            this.num1_box.TabIndex = 0;
            // 
            // comboBox1
            // 
            this.comboBox1.FormattingEnabled = true;
            this.comboBox1.Items.AddRange(new object[] {
            "+",
            "-",
            "*",
            "/"});
            this.comboBox1.Location = new System.Drawing.Point(120, 13);
            this.comboBox1.Name = "comboBox1";
            this.comboBox1.Size = new System.Drawing.Size(121, 21);
            this.comboBox1.TabIndex = 1;
            // 
            // num2_box
            // 
            this.num2_box.Location = new System.Drawing.Point(248, 13);
            this.num2_box.Name = "num2_box";
            this.num2_box.Size = new System.Drawing.Size(100, 20);
            this.num2_box.TabIndex = 2;
            // 
            // resultBtn
            // 
            this.resultBtn.Location = new System.Drawing.Point(13, 40);
            this.resultBtn.Name = "resultBtn";
            this.resultBtn.Size = new System.Drawing.Size(335, 142);
            this.resultBtn.TabIndex = 3;
            this.resultBtn.UseVisualStyleBackColor = true;
            this.resultBtn.Click += new System.EventHandler(this.button1_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(358, 194);
            this.Controls.Add(this.resultBtn);
            this.Controls.Add(this.num2_box);
            this.Controls.Add(this.comboBox1);
            this.Controls.Add(this.num1_box);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Form1";
            this.Text = "Calculator";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox num1_box;
        private System.Windows.Forms.ComboBox comboBox1;
        private System.Windows.Forms.TextBox num2_box;
        private System.Windows.Forms.Button resultBtn;
    }
}

