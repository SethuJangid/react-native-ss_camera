
#ifdef RCT_NEW_ARCH_ENABLED
#import "RNSethuModuleSpec.h"

@interface SethuModule : NSObject <NativeSethuModuleSpec>
#else
#import <React/RCTBridgeModule.h>

@interface SethuModule : NSObject <RCTBridgeModule>
#endif

@end
