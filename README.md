# Utilities for xbps-src written in C.

* The `xbps-repo-checkvers` program shows which XBPS binary packages need to be
  rebuilt on your system by comparing the versions of the binary packages which
  are available in the XBPS repositories registered in your `xbps.conf` with the
  latest available versions of them in the source package tree.

1. clone
2. type: **`$ ./configure`**
3. type: **`$ make`**
4. type: **`$ make install`**
5. type: **`$ xbps-repo-checkvers`**
6. ...
7. profit!?

There also exists a `xbps-src-utils` binary XBPS package for Void Linux. To
install it, type **`$ sudo xbps-install -Sy xbps-src-utils`** and have fun.

See COPYING file for license(s).

Copyright (c) 2012-2013 Dave Elusive <davehome@redthumb.info.tm>
All rights reserved.
