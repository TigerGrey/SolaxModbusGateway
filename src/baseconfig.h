#ifndef BASECONFIG_H
#define BASECONFIG_H

//#if defined(ESP8266) || defined(ESP32)
//  #define min(x,y) _min(x,y)
//#endif

#include "CommonLibs.h"
#include "ArduinoJson.h"


class BaseConfig {

  public:
    BaseConfig();
    void      StoreJsonConfig(String* json); 
    void      LoadJsonConfig();
    void      GetWebContent(WM_WebServer* server);

    const String&  GetMqttServer()    const {return mqtt_server;}
    const uint16_t& GetMqttPort()     const {return mqtt_port;}
    const String&  GetMqttUsername()  const {return mqtt_username;}
    const String&  GetMqttPassword()  const {return mqtt_password;}
    const String&  GetMqttRoot()      const {return mqtt_root;}
    const String&  GetMqttBasePath()  const {return mqtt_basepath;}
    const bool&    UseRandomMQTTClientID() const { return mqtt_UseRandomClientID; }
    const uint16_t& GetKeepAlive()    const {return keepalive;}
    const uint8_t& GetDebugLevel()    const {return debuglevel;}
    const uint8_t& GetClientID()      const {return clientid;}
    const uint32_t& GetBaudRate()     const {return baudrate;}
    
  private:
    String    mqtt_server;
    String    mqtt_username;
    String    mqtt_password;
    uint16_t  mqtt_port;
    String    mqtt_root;
    String    mqtt_basepath;
    bool      mqtt_UseRandomClientID;
    uint16_t  keepalive;
    uint8_t   debuglevel;
    uint8_t   clientid;
    uint32_t  baudrate;
};

extern BaseConfig* Config;

#endif
