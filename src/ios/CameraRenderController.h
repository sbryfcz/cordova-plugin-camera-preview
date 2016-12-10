#import <AVFoundation/AVFoundation.h>
#import <CoreImage/CoreImage.h>
#import <CoreMedia/CoreMedia.h>
#import <CoreVideo/CoreVideo.h>
#import <GLKit/GLKit.h>
#import <ImageIO/ImageIO.h>
#import <QuartzCore/QuartzCore.h>
#import <UIKit/UIKit.h>

#import "CameraSessionManager.h"

@protocol TakePictureDelegate
- (void)invokeTakePicture;
@end
;

@interface CameraRenderController
    : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    GLuint _renderBuffer;
    CVOpenGLESTextureCacheRef _videoTextureCache;
    CVOpenGLESTextureRef _lumaTexture;
}

@property (nonatomic) GLKView *view;
@property (nonatomic) CameraSessionManager *sessionManager;
@property (nonatomic) CIContext *ciContext;
@property (nonatomic) CIImage *latestFrame;
@property (nonatomic) EAGLContext *context;
@property (nonatomic) NSLock *renderLock;
@property BOOL dragEnabled;
@property BOOL tapToTakePicture;
@property (nonatomic, assign) id delegate;

@end
