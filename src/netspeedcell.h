/*
 * GeoIP C library binding for nodejs
 *
 * Licensed under the GNU LGPL 2.1 license
 */

#ifndef NODE_GEOIP_NETSPEEDCELL_H
#define NODE_GEOIP_NETSPEEDCELL_H

#include <v8.h>
#include <node.h>
#include "init.h"

using namespace v8;
using namespace node;

namespace native {
  class NetSpeedCell: public ObjectWrap {
    private:
      GeoIP *db;

      int db_edition;

      static Persistent<FunctionTemplate> constructor_template;

    protected:
      static NAN_METHOD(New);

    public:
      NetSpeedCell();

      ~NetSpeedCell();

      static void Init(Handle<Object> target);

      static NAN_METHOD(lookupSync);

  };
}

#endif /* NODE_GEOIP_NETSPEEDCELL_H */