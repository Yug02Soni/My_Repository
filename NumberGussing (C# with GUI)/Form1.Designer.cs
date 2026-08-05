namespace Number_Gussing_Game__GUI_;

partial class Form1
{
    private System.ComponentModel.IContainer components = null;

    private ComboBox cmbDifficulty;
    private TextBox txtGuess;
    private Button btnGuess;
    private Button btnPlayAgain;
    private Label lblRangeInstruction;
    private Label lblTriesRemaining;
    private Label lblStatusHint;
    private Label lblHighScore;

    protected override void Dispose(bool disposing)
    {
        if (disposing && (components != null))
            components.Dispose();
        base.Dispose(disposing);
    }

    #region Windows Form Designer generated code

    private void InitializeComponent()
    {
        components = new System.ComponentModel.Container();

        cmbDifficulty = new ComboBox();
        txtGuess = new TextBox();
        btnGuess = new Button();
        btnPlayAgain = new Button();
        lblRangeInstruction = new Label();
        lblTriesRemaining = new Label();
        lblStatusHint = new Label();
        lblHighScore = new Label();

        SuspendLayout();

        // Form
        AutoScaleDimensions = new SizeF(7F, 15F);
        AutoScaleMode = AutoScaleMode.Font;
        ClientSize = new Size(450, 400);
        Name = "Form1";
        Text = "Ultimate Number Guesser";

        // Difficulty ComboBox
        cmbDifficulty.DropDownStyle = ComboBoxStyle.DropDownList;
        cmbDifficulty.Location = new Point(20, 20);
        cmbDifficulty.Size = new Size(250, 23);
        cmbDifficulty.SelectedIndexChanged += cmbDifficulty_SelectedIndexChanged;

        // Range Label
        lblRangeInstruction.AutoSize = true;
        lblRangeInstruction.Location = new Point(20, 65);
        lblRangeInstruction.Size = new Size(120, 15);
        lblRangeInstruction.Text = "Guess a number";

        // Guess TextBox
        txtGuess.Location = new Point(20, 95);
        txtGuess.Size = new Size(120, 23);

        // Guess Button
        btnGuess.Location = new Point(160, 94);
        btnGuess.Size = new Size(100, 25);
        btnGuess.Text = "Guess";
        btnGuess.UseVisualStyleBackColor = true;
        btnGuess.Click += btnGuess_Click;

        // Tries Label
        lblTriesRemaining.AutoSize = true;
        lblTriesRemaining.Location = new Point(20, 140);
        lblTriesRemaining.Text = "Tries Remaining";

        // Status Label
        lblStatusHint.AutoSize = true;
        lblStatusHint.Location = new Point(20, 175);
        lblStatusHint.Size = new Size(100, 15);
        lblStatusHint.Text = "Status";

        // High Score Label
        lblHighScore.AutoSize = true;
        lblHighScore.Location = new Point(20, 210);
        lblHighScore.Text = "Best Score: None Yet";

        // Play Again Button
        btnPlayAgain.Location = new Point(20, 250);
        btnPlayAgain.Size = new Size(120, 30);
        btnPlayAgain.Text = "Play Again";
        btnPlayAgain.UseVisualStyleBackColor = true;
        btnPlayAgain.Visible = false;
        btnPlayAgain.Click += btnPlayAgain_Click;

        Controls.Add(cmbDifficulty);
        Controls.Add(lblRangeInstruction);
        Controls.Add(txtGuess);
        Controls.Add(btnGuess);
        Controls.Add(lblTriesRemaining);
        Controls.Add(lblStatusHint);
        Controls.Add(lblHighScore);
        Controls.Add(btnPlayAgain);

        ResumeLayout(false);
        PerformLayout();
    }

    #endregion
}