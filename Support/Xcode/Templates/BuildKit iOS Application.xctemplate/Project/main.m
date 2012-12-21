
#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) {
	NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
	int retVal = UIApplicationMain(argc, argv, nil, @"___PACKAGENAMEASIDENTIFIER___ApplicationDelegate");
	[pool release];
	return retVal;
}
