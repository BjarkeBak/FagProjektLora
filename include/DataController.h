#include <DataView.h>
#include <DataModel.h>

using namespace std;

#ifndef DATACONTROLLER_H
#define DATACONTROLLER_H

enum UserInput {UP_KEY, DOWN_KEY, RIGHT_KEY, LEFT_KEY, BACK_KEY, ENTER_KEY};


class DataController{
private:
    char state;
    DataModel model;
    DataView view;
    void updateModel(char input); //many more methods

public:
    DataController(DataModel datamodel, DataView dataView, char state);
    void handleUserInput(UserInput userInput);

};
#endif //DATACONTROLLER_H