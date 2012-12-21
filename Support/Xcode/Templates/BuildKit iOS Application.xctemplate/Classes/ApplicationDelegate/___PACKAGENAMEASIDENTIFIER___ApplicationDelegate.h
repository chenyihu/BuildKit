
#import <UIKit/UIKit.h>

@interface ___PACKAGENAMEASIDENTIFIER___ApplicationDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) UIWindow *window;
@property (nonatomic, retain) UINavigationController *navigationController;

#pragma mark -

+(___PACKAGENAMEASIDENTIFIER___ApplicationDelegate *) sharedApplicationDelegate;

@end
