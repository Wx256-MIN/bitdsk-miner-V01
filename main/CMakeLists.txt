idf_component_register(SRCS "main.c" "web_server.c"
                       INCLUDE_DIRS "."
                       EMBED_FILES "index.html"
                       REQUIRES esp_http_server json)
