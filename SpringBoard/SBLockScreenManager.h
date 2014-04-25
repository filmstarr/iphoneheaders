@interface SBLockScreenManager
@property(readonly, assign) BOOL isUILocked;
+(id)sharedInstance;
-(void)_lockScreenDimmed:(id)dimmed;
-(void)_finishUIUnlockFromSource:(int)source withOptions:(id)options;
-(void)unlockUIFromSource:(int)source withOptions:(id)options;

@end