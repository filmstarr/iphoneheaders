@interface SBLockScreenViewController
-(void)activate;
-(BOOL)isInScreenOffMode;
-(BOOL)isLockScreenVisible;
-(void)passcodeLockViewEmergencyCallButtonPressed:(id)pressed;
-(void)passcodeLockViewCancelButtonPressed:(id)pressed;
@end