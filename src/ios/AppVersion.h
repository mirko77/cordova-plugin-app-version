#import <Cordova/CDVPlugin.h>

@interface AppVersion : CDVPlugin

- (void)getVersionNumber:(CDVInvokedUrlCommand*)command;

- (void)getVersionCode:(CDVInvokedUrlCommand*)command;

- (void)getAppName:(CDVInvokedUrlCommand*)command;

@end
