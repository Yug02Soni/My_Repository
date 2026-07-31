import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class DatabaseHelper {

    // Database credentials
    private static final String URL = "jdbc:postgresql://localhost:5432/booking_system";
    private static final String USER = "postgres";     // change if different
    private static final String PASSWORD = "ila7@Ila"; // your password

    // Get connection
    public static Connection connect() {
        try {
            return DriverManager.getConnection(URL, USER, PASSWORD);
        } catch (SQLException e) {
            System.out.println("❌ Database connection failed: " + e.getMessage());
            return null;
        }
    }

    // Insert new user
    public static boolean insertUser(String name, String email, String password) {

        String sql = "INSERT INTO users (name, email, password) VALUES (?, ?, ?)";

        try (Connection conn = connect();
             PreparedStatement pstmt = conn.prepareStatement(sql)) {

            pstmt.setString(1, name);
            pstmt.setString(2, email);
            pstmt.setString(3, password);

            pstmt.executeUpdate();
            System.out.println("✅ User inserted successfully!");
            return true;

        } catch (SQLException e) {
            System.out.println("❌ Error inserting user: " + e.getMessage());
            return false;
        }
    }

    // Validate login
    public static boolean validateLogin(String email, String password) {
        String sql = "SELECT * FROM users WHERE email = ? AND password = ?";
        try (Connection conn = connect();
             PreparedStatement pstmt = conn.prepareStatement(sql)) {

            pstmt.setString(1, email);
            pstmt.setString(2, password);

            ResultSet rs = pstmt.executeQuery();
            if (rs.next()) {
                System.out.println("✅ Login successful for: " + email);
                return true;
            } else {
                System.out.println("❌ Invalid email or password.");
                return false;
            }

        } catch (SQLException e) {
            System.out.println("❌ Error validating login: " + e.getMessage());
            return false;
        }
    }
    public static void main(String[] args) {
        connect();
        validateLogin(URL, PASSWORD);
    }
}
