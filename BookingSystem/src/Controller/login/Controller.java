/**
 * 
 * Sample Skeleton for 'main_layout_signin.fxml' Controller Class
 * 
*/

/* Package */
package Controller.login;

/**
 * Imports
 */

/* Built-In */
import java.io.IOException;

/* JavaFX */

/* For FXML */
import javafx.fxml.FXML;
import javafx.fxml.FXMLLoader;

/* JavaFX Scene */
import javafx.scene.Parent;
import javafx.scene.Scene;
import javafx.scene.control.Alert;
import javafx.scene.control.Button;
import javafx.scene.control.ComboBox;
import javafx.scene.control.DatePicker;
import javafx.scene.control.PasswordField;
import javafx.scene.control.TextField;
import javafx.scene.image.Image;
import javafx.scene.image.ImageView;
import javafx.scene.layout.AnchorPane;

/* JavaFX Stage */
import javafx.stage.Stage;

/**
 * Controller class for the login screen.
 * 
 * This class manages the login UI components, handles user input validation,
 * and allows switching between different application scenes such as
 * login and sign-in screens.
 * 
 * All UI components are linked via FXML's fx:id and actions via onAction.
 */

/* Code */
public class Controller {

    /**
     * 
     * The root container of the current scene.
     * This is injected automatically by JavaFX from the FXML file via fx:id="root".
     * 
     * We use this root node to access the current window (Stage) and manipulate
     * scenes.
     * 
     */

    @FXML /* AncorPane */
    private AnchorPane root;

    /**
     * 
     * Text field for the user to enter their User ID (email).
     * Linked via fx:id="userIdField".
     * 
     */

    @FXML /* UserID TextField */
    private TextField userIdField;

    /**
     * 
     * Password field for the user to enter their password/passcode.
     * Linked via fx:id="passcodeField".
     * 
     */

    @FXML
    private PasswordField passcodeField;

    /**
     * 
     * ComboBox allowing user to select a preferred color.
     * Linked via fx:id="colorComboBox".
     * 
     */

    @FXML
    private ComboBox<String> colorComboBox;

    /**
     * 
     * DatePicker control for user to select their birth date.
     * Linked via fx:id="birthDatePicker".
     * 
     */

    @FXML
    private DatePicker birthDatePicker;

    /**
     * 
     * Button for submitting the login form.
     * Linked via fx:id="loginButton".
     * 
     */

    @FXML
    private Button loginButton;

    /**
     * 
     * Button that, when clicked, navigates to the sign-in screen.
     * Linked via fx:id="signButton".
     * 
     */

    @FXML
    private Button signButton;

    /**
     * 
     * Help button (functionality not implemented here).
     * Linked via fx:id="helpButton".
     * 
     */

    @FXML
    private Button helpButton;

    /**
     * 
     * Button to create a new account (functionality not implemented here).
     * Linked via fx:id="c_a_Button".
     * 
     */

    @FXML
    private Button c_a_Button;

    /**
     * 
     * This method is called automatically after the FXML is loaded and
     * all @FXML fields are injected.
     * 
     * Here, it is used to initialize UI elements, such as populating ComboBox
     * items.
     * 
     */

    @FXML
    private void initialize() {

        // Add predefined color options to the ComboBox dropdown
        colorComboBox.getItems().addAll("White", "Red", "Blue", "Green");

        // Set default selected color to "White"
        colorComboBox.setValue("White");

    }

    /**
     * 
     * Event handler method for the loginButton's action.
     * Called when the user clicks the "Login In" button.
     * 
     * This method performs basic validation on the inputs,
     * and simulates login authentication.
     * 
     */

    @FXML
    private void handleLoginButton() {
        String userId = userIdField.getText();
        String passcode = passcodeField.getText();

        if (userId.equals("admin") && passcode.equals("1234")) {
            try {
                Parent root = FXMLLoader.load(getClass().getResource("/layouts/dashboard/main_layout_dashboard.fxml"));
                Stage stage = (Stage) this.root.getScene().getWindow();
                stage.setScene(new Scene(root));
                stage.setTitle("Dashboard");
                stage.show();
            } catch (IOException e) {
                e.printStackTrace();
                Alert alert = new Alert(Alert.AlertType.ERROR);
                alert.setTitle("Error");
                alert.setHeaderText("Cannot Load Dashboard");
                alert.setContentText("An error occurred while loading the dashboard.");
                alert.showAndWait();
            }
        } else {
            Alert alert = new Alert(Alert.AlertType.WARNING);
            alert.setTitle("Login Failed");
            alert.setHeaderText("Invalid Credentials");
            alert.setContentText("Please enter a valid User ID and Passcode.");
            alert.showAndWait();
        }
    }

    /**
     * 
     * Event handler method for the signButton's action.
     * Called when the user clicks the "Sign In" button.
     * 
     * This method switches the current scene to the sign-in layout.
     * 
     */

    @FXML
    private void handleSignButton() {

        // Path to the sign-in FXML layout file (should be relative to classpath root)
        String signInFXMLPath = "/layouts/sign_in/main_layout_signin.fxml";

        // Use utility method to load and switch to the sign-in scene
        loadFXMLAndSwitchScene(signInFXMLPath, "Sign In");

    }

    /**
     * Utility method to load an FXML file and switch the application's stage
     * to display the new scene defined by the loaded FXML.
     * 
     * @param fxmlPath    The path to the FXML file in the classpath (starting with
     *                    '/')
     * @param windowTitle The window title to set on the Stage after loading the new
     *                    scene
     */

    private void loadFXMLAndSwitchScene(String fxmlPath, String windowTitle) {

        try {
            // Create an FXMLLoader for the given FXML path
            FXMLLoader loader = new FXMLLoader(getClass().getResource(fxmlPath));

            // Load the root node hierarchy from the FXML file
            Parent newRoot = loader.load();

            // Retrieve the current window (Stage) from any node in the current scene (here,
            // root)
            Stage stage = (Stage) root.getScene().getWindow();

            // Create a new Scene object using the loaded root node
            Scene newScene = new Scene(newRoot);

            // Set the new scene on the stage (window)
            stage.setScene(newScene);

            // Set the window's title as specified
            stage.setTitle(windowTitle);

            // Show the stage if it is not already visible
            stage.show();

        } catch (IOException e) {

            // Print stack trace to the console for debugging purposes
            e.printStackTrace();

            // Show an alert dialog informing the user of the failure to load FXML
            showAlert("Error", "Unable to load the " + windowTitle + " screen.");

        }

    }

    /**
     * 
     * Utility method to display an informational alert dialog with an optional
     * icon.
     * 
     * @param title   The title to display on the alert window
     * @param message The main message text to display inside the alert dialog
     * 
     */

    private void showAlert(String title, String message) {

        // Create a new Alert dialog of type INFORMATION
        Alert alert = new Alert(Alert.AlertType.INFORMATION);

        // Set the title of the alert window
        alert.setTitle(title);

        // Remove default header text for cleaner look
        alert.setHeaderText(null);

        // Set the main content message of the alert dialog
        alert.setContentText(message);

        try {

            // Attempt to load an icon image from resources to display in the alert
            Image image = new Image(getClass().getResourceAsStream("/res/img/online-booking.png"));

            // Create an ImageView to hold and display the icon
            ImageView imageView = new ImageView(image);

            // Set fixed size for the icon
            imageView.setFitHeight(48);
            imageView.setFitWidth(48);

            // Set the graphic icon on the alert dialog window
            alert.setGraphic(imageView);

        } catch (Exception e) {

        }

        // Show the alert dialog and wait for the user to close it before continuing
        alert.showAndWait();

    }

}