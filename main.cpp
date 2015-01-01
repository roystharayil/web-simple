#include <Wt/WApplication>
#include <Wt/WContainerWidget>

using namespace Wt;

WApplication* createApplication(const WEnvironment& env)
{
    WApplication *app = new webpage(env);

    return app;
}

int main(int argc, char** argv)
{

    return WRun(argc, argv, &createApplication);
}

