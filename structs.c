#include <stdlib.h>
#include <stdio.h>

struct coordinates {
    float xaxis;
    float yaxis;
};

typedef struct location {

} location_t;

typedef struct user {
    char *username;
    char *password;
    char *email; 
} user_t;

typedef struct trip {
    location_t *trip_start;
    location_t *trip_finish;
    coordinates *distance;
} trip_t;

typedef struct driver {
    int driver_id;
    user_t *user;
    trip_t **trip;
    float wage;
} driver_t;

trip_t make_trip(location_t *start, location_t *finish) {
    trip_t trip;
    trip.trip_start = start;
    trip.trip_finish = finish;
    trip.distance.xaxis = start->xaxis - finish->xaxis;
    trip.distance.yaxis = statr->yaxis - finish->yaxis;
    return trip;
}

int make_user(char *username, char *password, char *email) {
    int status;
    if (email_in_use(email)) set_status(ERROR_EMAIL_IN_USE);
    if(username_exists(username)) set_status(ERROR_USER_EXISTS);
    user.email = email;
    return status;
}
