/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBAlertItem.h"


@interface SBLockScreenAudioRoutesAlertItem : SBAlertItem {
}
// inherited: -(Class)alertSheetClass;
// inherited: -(id)alertSheet;
-(void)alertSheet:(id)sheet buttonClicked:(int)clicked;
// inherited: -(BOOL)allowMenuButtonDismissal;
// inherited: -(void)willRelockForButtonPress:(BOOL)buttonPress;
// inherited: -(BOOL)shouldShowInLockScreen;
// inherited: -(BOOL)togglesMediaControls;
// inherited: -(void)performUnlockAction;
-(void)audioRoutingPicker:(id)picker didSelectRouteAtIndex:(int)index;
@end
