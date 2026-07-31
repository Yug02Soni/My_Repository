package Controller.sign_in;

import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;

import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Label;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;

import javafx.stage.Stage;

public class Controller {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    private TextField userIdField;

    @FXML
    private PasswordField passwordField;

    @FXML
    private Label errorMessageLabel;

    @FXML
    private void sign_in(ActionEvent event) {
        errorMessageLabel.setText("");

        String userId = userIdField.getText();
        String password = passwordField.getText();

        if (userId == null || userId.trim().isEmpty()) {
            errorMessageLabel.setText("User ID cannot be empty.");
            return;
        }

        if (password == null || password.trim().isEmpty()) {
            errorMessageLabel.setText("Password cannot be empty.");
            return;
        }

        if (userId.equals("admin") && password.equals("12345")) {
            loadScene(event, "/layouts/dashboard/dashboard.fxml", "Dashboard");
        } else {
            errorMessageLabel.setText("Invalid User ID or Password.");
        }
    }

    @FXML
    private void c_a(ActionEvent event) {
        // Load Create Account screen
        loadScene(event, "/layouts/create_account/main_layout_ca.fxml", "Create Account");
    }

    @FXML
    private void log_in(ActionEvent event) {
        // For demonstration, just reload Sign In screen or you can do something else
        loadScene(event, "/layouts/login/main_layout.fxml", "LogIn");
    }

    @FXML
    private void help(ActionEvent event) {
        // Optional: Implement help dialog or alert
        System.out.println("Help clicked!");
    }

    private void loadScene(ActionEvent event, String fxmlPath, String title) {
        try {
            Parent root = FXMLLoader.load(getClass().getResource(fxmlPath));
            Stage stage = (Stage) ((Node) event.getSource()).getScene().getWindow();
            Scene scene = new Scene(root);
            stage.setScene(scene);
            stage.setTitle(title);
            stage.show();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    @FXML
    private void initialize() {
        errorMessageLabel.setText("");
    }
}
