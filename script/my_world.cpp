#include <gazebo/gazebo.hh>

namespace gazebo
{
  class MyRobPlugin : public WorldPlugin
  {
    public: MyRobPlugin() : WorldPlugin()
            {
              printf("Welcome to Andrejs's World!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(MyRobPlugin)
}