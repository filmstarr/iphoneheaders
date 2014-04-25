@interface SBBacklightController
+(id)sharedInstance;
-(void)_startFadeOutAnimationIfNecessary;
-(void)turnOnScreenFullyWithBacklightSource:(int)backlightSource;
@end