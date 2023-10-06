#include <iostream>

using namespace std;

class GameConsole {

    public:
        virtual string getMedium(){
            return storageMedium;
        };

    private:
        string storageMedium = "FUCK YOU";
    
};

class Nintendo : public GameConsole {


};

class Playstation : public GameConsole{


};

class N64 : public Nintendo {

    public:
        string getMedium() override
        {
            return storageMedium;
        }

    private:
        string storageMedium = "cartridge";

};

class NintendoSwitch : public Nintendo {

    public:
        string getMedium() override
        {
            return storageMedium;
        }

    private:
        string storageMedium = "Nintendo game card";
    
};

class Playstation4 : public Playstation {

    public:
        string getMedium() override
        {
            return storageMedium;
        }

    private:
        string storageMedium = "Blu-ray";

};