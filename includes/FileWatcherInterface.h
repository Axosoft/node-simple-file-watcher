#ifndef FILEWATCHERINTERFACE_H
#define FILEWATCHERINTERFACE_H

#include <string>
#include <queue>

struct Event {
  std::string action;
  std::string directory;
  std::string *file;
};

namespace NSFW {
  class FileWatcherInterface {
  public:
    FileWatcherInterface(){}
    FileWatcherInterface(std::string path, std::queue<Event> &eventsQueue, bool &watchFiles){}
    virtual ~FileWatcherInterface();
    virtual bool start() = 0;
    virtual void stop() = 0;
  };
}

#endif
