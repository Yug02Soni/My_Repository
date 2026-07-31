import javafx.application.Application;
import javafx.fxml.FXMLLoader;
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.image.Image;
import javafx.stage.Stage;

public class App extends Application {

    @Override
    public void start(Stage primaryStage) throws Exception {

        // Load the FXML file
        Parent root = FXMLLoader.load(getClass().getResource("/layouts/login/main_layout.fxml"));

        // Create the scene
        Scene scene = new Scene(root, 600, 400);

        // ✅ Link CSS (path is relative to resources)
        scene.getStylesheets().add(getClass().getResource("/layouts/login/css/main_layout.css").toExternalForm());

        // Setup the stage
        primaryStage.setTitle("Debooker - The fastest way to book online tickets");
        primaryStage.setScene(scene);
        primaryStage.setResizable(false);

        // ✅ Add window icon
        primaryStage.getIcons().add(new Image(getClass().getResourceAsStream("/res/img/online-booking.png")));

        primaryStage.show();
    }

    public static void main(String[] args) {
        launch(args);
    }
}
