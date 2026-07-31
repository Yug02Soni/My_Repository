package Controller.dashboard;

import java.io.IOException;
import java.net.URL;
import java.util.ResourceBundle;

import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;
import javafx.scene.Node;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class Controller {

    @FXML
    private ResourceBundle resources;

    @FXML
    private URL location;

    @FXML
    void btk(ActionEvent event) {
        try {

            Parent root = FXMLLoader.load(getClass().getResource("/layouts/dashboard/BookTicket/layout.fxml"));

            Stage stage = (Stage) ((Node) event.getSource()).getScene().getWindow();
            stage.setScene(new Scene(root));
            stage.show();

        } catch (IOException e) {
            e.printStackTrace();
            System.out.println("❌ Could not load Second.fxml");
        }
    }

    @FXML
    void mnb(ActionEvent event) {
        try {

            Parent root = FXMLLoader.load(getClass().getResource("/layouts/dashboard/make_notes/main_layout_mn.fxml"));

            Stage stage = (Stage) ((Node) event.getSource()).getScene().getWindow();
            stage.setScene(new Scene(root));
            stage.show();

        } catch (IOException e) {
            e.printStackTrace();
            System.out.println("❌ Could not load Second.fxml");
        }
    }

    @FXML
    void initialize() {
        // initialization code here if needed
    }
}
