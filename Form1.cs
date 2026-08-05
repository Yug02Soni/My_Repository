using System;
using System.Drawing;
using System.Media;
using System.Windows.Forms;

namespace Number_Gussing_Game__GUI_
{
    public partial class Form1 : Form
    {
        private int targetNumber;
        private int currentScore;
        private int maxTries;
        private int maxRange;
        private int highScore = int.MaxValue; 
        private Random random = new Random();

        public Form1()
        {
            InitializeComponent();
            SetupCustomStyles();
            ResetGameToDefault();
        }

        private void SetupCustomStyles()
        {
            this.Text = "Ultimate Number Guesser";
            this.Size = new Size(450, 400);
            this.FormBorderStyle = FormBorderStyle.FixedSingle;
            this.MaximizeBox = false;
            
            cmbDifficulty.Items.Clear();
            cmbDifficulty.Items.AddRange(new string[] { "Easy (1-10, 5 Tries)", "Medium (1-50, 4 Tries)", "Hard (1-100, 3 Tries)" });
            cmbDifficulty.SelectedIndex = 1; // Default to Medium
        }

        private void StartNewGame()
        {
            switch (cmbDifficulty.SelectedIndex)
            {
                case 0: maxRange = 10; maxTries = 5; break;
                case 1: maxRange = 50; maxTries = 4; break;
                case 2: maxRange = 100; maxTries = 3; break;
                default: maxRange = 50; maxTries = 4; break;
            }

            targetNumber = random.Next(1, maxRange + 1);
            currentScore = 0;
            this.BackColor = SystemColors.Control;

            lblRangeInstruction.Text = $"Guess a number between 1 and {maxRange}";
            lblTriesRemaining.Text = $"Tries Remaining: {maxTries}";
            lblStatusHint.Text = "Make your first move!";
            lblStatusHint.ForeColor = Color.Black;

            txtGuess.Clear();
            txtGuess.Enabled = true;
            btnGuess.Enabled = true;
            btnPlayAgain.Visible = false;
            txtGuess.Focus();
        }

        private void btnGuess_Click(object sender, EventArgs e)
        {
            if (!int.TryParse(txtGuess.Text, out int userGuess) || userGuess < 1 || userGuess > maxRange)
            {
                this.BackColor = Color.LightPink;
                lblStatusHint.Text = $"Invalid! Enter a number from 1 to {maxRange}.";
                lblStatusHint.ForeColor = Color.Red;
                SystemSounds.Beep.Play();
                return;
            }

            currentScore++;
            int remaining = maxTries - currentScore;

            if (userGuess == targetNumber)
            {
                lblStatusHint.Text = $"🎉 Correct! You got it in {currentScore} tries!";
                lblStatusHint.ForeColor = Color.Green;
                this.BackColor = Color.LightGreen;
                SystemSounds.Asterisk.Play();
                UpdateHighScore();
                EndGame();
            }
            else if (currentScore >= maxTries)
            {
                lblStatusHint.Text = $"💥 Game Over! The number was {targetNumber}.";
                lblStatusHint.ForeColor = Color.Red;
                lblTriesRemaining.Text = "Tries Remaining: 0";
                this.BackColor = Color.Tomato;
                SystemSounds.Hand.Play();
                EndGame();
            }
            else
            {
                string hint = userGuess < targetNumber ? "Too LOW! ⬆️" : "Too HIGH! ⬇️";
                lblStatusHint.Text = hint;
                lblStatusHint.ForeColor = Color.Blue;
                lblTriesRemaining.Text = $"Tries Remaining: {remaining}";
                txtGuess.Clear();
                txtGuess.Focus();
            }
        }

        private void UpdateHighScore()
        {
            if (currentScore < highScore)
            {
                highScore = currentScore;
                string diffName = cmbDifficulty.SelectedItem.ToString().Split(' ')[0];
                lblHighScore.Text = $"Best Score: {highScore} Tries ({diffName})";
                MessageBox.Show("🏆 New Personal Best High Score!", "Congratulations!", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }

        private void EndGame()
        {
            txtGuess.Enabled = false;
            btnGuess.Enabled = false;
            btnPlayAgain.Visible = true;
            btnPlayAgain.Focus();
        }

        private void btnPlayAgain_Click(object sender, EventArgs e)
        {
            StartNewGame();
        }

        private void cmbDifficulty_SelectedIndexChanged(object sender, EventArgs e)
        {
            StartNewGame();
        }

        private void ResetGameToDefault()
        {
            lblHighScore.Text = "Best Score: None Yet";
            StartNewGame();
        }
    }
}
