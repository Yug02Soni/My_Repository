@echo off

java ^
--module-path "D:/openjfx-24.0.2_windows-x64_bin-sdk/javafx-sdk-24.0.2/lib" ^
--add-modules javafx.controls,javafx.fxml,javafx.web ^
--enable-native-access=javafx.graphics ^
--add-opens javafx.controls/com.sun.javafx.scene.control=ALL-UNNAMED ^
-jar "BookingSystem2.jar"

pause
