#import <Cordova/CDV.h>
#import <Cordova/CDVInvokedUrlCommand.h>
#import <Cordova/CDVPlugin.h>

#import "CameraRenderController.h"
#import "CameraSessionManager.h"

@interface CameraPreview : CDVPlugin <TakePictureDelegate>

- (void)startCamera:(CDVInvokedUrlCommand *)command;
- (void)stopCamera:(CDVInvokedUrlCommand *)command;
- (void)showCamera:(CDVInvokedUrlCommand *)command;
- (void)hideCamera:(CDVInvokedUrlCommand *)command;
- (void)setFlashMode:(CDVInvokedUrlCommand *)command;
- (void)switchCamera:(CDVInvokedUrlCommand *)command;
- (void)takePicture:(CDVInvokedUrlCommand *)command;
- (void)takeQuickPicture:(CDVInvokedUrlCommand *)command;
- (void)setOnPictureTakenHandler:(CDVInvokedUrlCommand *)command;

- (void)invokeTakePicture:(CGFloat)maxWidth withHeight:(CGFloat)maxHeight;
- (void)invokeTakePicture;

@property (nonatomic) CameraSessionManager *sessionManager;
@property (nonatomic) CameraRenderController *cameraRenderController;
@property (nonatomic) NSString *onPictureTakenHandlerId;
@property (retain, nonatomic) CIContext *context;

@end
