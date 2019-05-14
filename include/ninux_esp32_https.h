
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"

//#include <esp_wifi.h>
//#include <esp_event_loop.h>
#include <esp_log.h>
//#include <esp_system.h>
//#include <nvs_flash.h>
//#include <sys/param.h>
//#include "tcpip_adapter.h"
//#include "esp_eth.h"
//#include "protocol_examples_common.h"

#include <esp_https_server.h>
#include "esp32_web_basic_auth.h"

extern EventGroupHandle_t wifi_event_group;
extern const int CONNECTED_BIT;


static esp_err_t root_get_handler(httpd_req_t *req);

//static const httpd_uri_t root = {
//    .uri       = "/",
//    .method    = HTTP_GET,
//    .handler   = root_get_handler
//};


static httpd_handle_t start_webserver(void);
static void stop_webserver(httpd_handle_t server);
void ninux_esp32_https_task(void * pvParameter);
void ninux_esp32_https();
