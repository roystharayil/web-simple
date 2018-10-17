#include <Wt/WApplication>
#include <Wt/WContainerWidget>

using namespace Wt;

/*  ....
 * A simple web page application class.
 */
class webpage : public Wt::WApplication
{
public:
  webpage(const WEnvironment& env);

};

//---------create webpage object---------------------------------
webpage::webpage(const WEnvironment &env) : Wt::WApplication(env)
{
    setTitle("simple!!!");
}

//--------------------------------------------------------------
WApplication* createApplication(const WEnvironment& env)
{
    WApplication *app = new webpage(env);
    return app;
}

int main(int argc, char** argv)
{

    return WRun(argc, argv, &createApplication);
}
//--------------------------------------------------------------
//------------COde Ends-------------------
