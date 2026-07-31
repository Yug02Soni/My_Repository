/**
 * Sample Skeleton for 'main_layout_ca.fxml' Controller Class
 */

package Controller.create_account;

import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.TextField;
import javafx.stage.Stage;

public class Controller {

    @FXML // ResourceBundle that was given to the FXMLLoader
    private ResourceBundle resources;

    @FXML // URL location of the FXML file that was given to the FXMLLoader
    private URL location;

    @FXML // User ID Text Field
    private TextField userField;

    @FXML // User ID Text Field
    private TextField passcodeField;

    private String fxmlPath;

    @FXML
    void create_account(ActionEvent event) {
        loadScene(event, "/layouts/login/main_layout.fxml", "Create Account");
    }

    private void loadScene(ActionEvent event, String string, String string2) {
        try {
            
            Parent root = FXMLLoader.load(getClass().getResource(fxmlPath));
            Stage stage = (Stage) ((Node) event.getSource()).getScene().getWindow();
            Scene scene = new Scene(root);
            stage.setScene(scene);
            stage.setTitle("hELLO");
            stage.show();

        } catch (IOException e) {

            e.printStackTrace();

        }
    }

    @FXML // This method is called by the FXMLLoader when initialization is complete
    void initialize() {

    }

}
