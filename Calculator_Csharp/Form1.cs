using System;
using System.Drawing;
using System.Windows.Forms;

namespace Calculator // Ensure this matches the exact namespace in your Program.cs
{
    public partial class Form1 : Form
    {
        private TextBox displayBox;
        private double resultValue = 0;
        private string operationPerformed = "";
        private bool isOperationPerformed = false;

        public Form1()
        {
            // 1. Leave this here! It runs the untouched Form1.Designer.cs code
            InitializeComponent(); 
            
            // 2. Run our custom calculator window setup
            SetupCalculatorFormProperties();
            SetupCalculatorUI();
        }

        private void SetupCalculatorFormProperties()
        {
            this.Text = "Calculator";
            this.Width = 340;
            this.Height = 450;
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            this.StartPosition = FormStartPosition.CenterScreen;
        }

        private void SetupCalculatorUI()
        {
            displayBox = new TextBox
            {
                Text = "0",
                Font = new Font("Arial", 24, FontStyle.Bold),
                Width = 300,
                Location = new Point(12, 15),
                TextAlign = HorizontalAlignment.Right,
                ReadOnly = true,
                BackColor = Color.White
            };
            this.Controls.Add(displayBox);

            string[,] buttons = {
                { "7", "8", "9", "/" },
                { "4", "5", "6", "*" },
                { "1", "2", "3", "-" },
                { "C", "0", "=", "+" }
            };

            int btnWidth = 70;
            int btnHeight = 60;
            int spacing = 8;
            int startX = 12;
            int startY = 80;

            for (int row = 0; row < 4; row++)
            {
                for (int col = 0; col < 4; col++)
                {
                    string btnText = buttons[row, col];
                    Button btn = new Button
                    {
                        Text = btnText,
                        Font = new Font("Arial", 16, FontStyle.Bold),
                        Width = btnWidth,
                        Height = btnHeight,
                        Location = new Point(startX + (col * (btnWidth + spacing)), startY + (row * (btnHeight + spacing)))
                    };

                    if (char.IsDigit(btnText, 0))
                    {
                        btn.Click += ButtonDigit_Click;
                    }
                    else if (btnText == "C")
                    {
                        btn.Click += ButtonClear_Click;
                    }
                    else if (btnText == "=")
                    {
                        btn.Click += ButtonEquals_Click;
                    }
                    else
                    {
                        btn.Click += ButtonOperator_Click;
                    }

                    this.Controls.Add(btn);
                }
            }
        }

        private void ButtonDigit_Click(object sender, EventArgs e)
        {
            Button button = (Button)sender;
            if ((displayBox.Text == "0") || (isOperationPerformed))
                displayBox.Clear();

            isOperationPerformed = false;
            displayBox.Text += button.Text;
        }

        private void ButtonClear_Click(object sender, EventArgs e)
        {
            displayBox.Text = "0";
            resultValue = 0;
            operationPerformed = "";
        }

        private void ButtonOperator_Click(object sender, EventArgs e)
        {
            Button button = (Button)sender;

            if (resultValue != 0)
            {
                ButtonEquals_Click(this, new EventArgs());
            }
            
            operationPerformed = button.Text;
            resultValue = double.Parse(displayBox.Text);
            isOperationPerformed = true;
        }

        private void ButtonEquals_Click(object sender, EventArgs e)
        {
            double secondNum = double.Parse(displayBox.Text);

            switch (operationPerformed)
            {
                case "+":
                    displayBox.Text = (resultValue + secondNum).ToString();
                    break;
                case "-":
                    displayBox.Text = (resultValue - secondNum).ToString();
                    break;
                case "*":
                    displayBox.Text = (resultValue * secondNum).ToString();
                    break;
                case "/":
                    if (secondNum == 0)
                        displayBox.Text = "Error (Div by 0)";
                    else
                        displayBox.Text = (resultValue / secondNum).ToString();
                    break;
                default:
                    break;
            }
            resultValue = double.Parse(displayBox.Text);
            operationPerformed = "";
        }
    }
}
