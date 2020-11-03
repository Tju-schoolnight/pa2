#include "prefix/prefix.h"

#include "data-mov/mov.h"
#include "data-mov/xchg.h"
#include "data-mov/movext.h"
#include "data-mov/cltd.h"
#include "data-mov/leave.h"

#include "arith/dec.h"
#include "arith/inc.h"
#include "arith/neg.h"
#include "arith/imul.h"
#include "arith/mul.h"
#include "arith/idiv.h"
#include "arith/div.h"

#include "logic/and.h"
#include "logic/or.h"
#include "logic/not.h"
#include "logic/xor.h"
#include "logic/sar.h"
#include "logic/shl.h"
#include "logic/shr.h"
#include "logic/shrd.h"


#include "new-add/adc.h"
#include "new-add/add.h"
#include "new-add/call.h"
#include "new-add/cmp.h"
#include "new-add/ja.h"
#include "new-add/jae.h"
#include "new-add/jb.h"
#include "new-add/jbe.h"
#include "new-add/je.h"
#include "new-add/jmp.h"
#include "new-add/jne.h"
#include "new-add/jno.h"
#include "new-add/jnp.h"
#include "new-add/jns.h"
#include "new-add/jo.h"
#include "new-add/jp.h"
#include "new-add/js.h"

#include "new-add/pop.h"
#include "new-add/push.h"

#include "new-add/ret.h"
#include "new-add/sbb.h"
#include "new-add/sub.h"

#include "new-add/test.h"

#include "string/rep.h"

#include "misc/misc.h"

#include "special/special.h"
