#import <Cordova/CDVPlugin.h>
#import <Photos/Photos.h>
@interface ImageResizer : CDVPlugin
- (void) resize:(CDVInvokedUrlCommand*)command;
- (UIImage *) image:(UIImage *) image scaleImageToSize:(CGSize) newSize backgroundColor:(UIColor*) color ;
- (UIImage*) rotateImage:(UIImage*) image withRotation:(int) rotation;
@end
