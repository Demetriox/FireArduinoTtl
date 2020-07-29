#include <Firebase.h>
#include <FirebaseArduino.h>
#include <FirebaseCloudMessaging.h>
#include <FirebaseError.h>
#include <FirebaseHttpClient.h>
#include <FirebaseObject.h>

//FIREBASE
#define FIREBASE_HOST "fireduino-818e7.firebaseio.com"
#define FIREBASE_AUTH "dKexwCYkSBHC71VbAKksTsd0al94sltFup324trr"
#define WIFI_SSID "" //AQUI VA EL SSID DE LA RED WIFI
#define WIFI_PASSWORD "" //Aqui va el password wifi

String path = "/Proyecto1"

FirebaseData firebaseData;
FirebaseJson json;

void printResult(FirebaseData &data);

void setup() {
  Serial.begin(9600);
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  Serial.print("Conectado");
  while(WiFi.status() != WL_CONNECTED) {
    Serial.print(".");
  }

  Firebase.begin(FIREBASE_HOST, FIREBASE_AUTH);
  delay(500);

  Firebase.setString("Submodulo", String("conectadoFb")
}
