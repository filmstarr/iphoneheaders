/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/Foundation.h>
#import <Availability2.h>

@class SBButtonBar, SBIcon, SBIconList, SBApplication;

@interface SBIconModel : NSObject {
#if __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_3_2
	NSString* _iconCachePath;
	NSString* _smallIconCachePath;
#endif
	NSDictionary* _previousIconState;
	NSMutableArray* _iconLists;
	SBButtonBar* _buttonBar;
	NSMutableDictionary* _allIcons;
	NSSet* _hiddenIconTags;
	NSSet* _visibleIconTags;
}
+(SBIconModel*)sharedInstance;
+(NSInteger)maxIconListCount;
// inherited: -(id)init;
// inherited: -(void)dealloc;
-(void)localeChanged;
-(void)setVisibilityOfIconsWithVisibleTags:(NSArray *)visibleTags hiddenTags:(NSArray *)hiddenTags;
-(BOOL)isIconVisible:(SBIcon*)icon;
-(void)replaceDownloadingDisplayIdentifiers:(NSArray *)identifiers withDisplayIdentifiers:(NSArray *)displayIdentifiers;
-(void)_completedUninstall:(id)uninstall;
-(id)addDownloadingIconForDownload:(id)download;
-(id)addDownloadingIconForDisplayIdentifier:(NSString *)displayIdentifier;
-(id)addSpotlightIconForDisplayIdentifier:(NSString *)displayIdentifier spotlightCategory:(id)category iconName:(id)name;
-(void)removeAppForDownloadingIcon:(id)downloadingIcon;
-(id)addBookmarkIconForWebClip:(id)webClip;
-(void)addIconForApplication:(SBApplication *)application;
-(void)loadAllIcons;
-(NSArray*)visibleIconIdentifiers;
-(NSArray*)allIcons;
-(SBIcon*)iconForDisplayIdentifier:(NSString*)displayIdentifier;
-(SBIcon*)iconForDisplayIdentifier:(NSString*)displayIdentifier andSpotlightCategory:(id)category;
-(NSDictionary*)iconState;	// {iconLists=..., buttonBar=...}
-(void)noteIconStateChangedExternally;
-(SBButtonBar*)buttonBar;
-(NSArray*)iconLists;
-(int)indexOfIconList:(SBIconList *)iconList;
-(void)createIconLists;
-(void)uninstallBookmarkIcon:(SBIcon *)icon;
-(SBIconList*)iconListContainingIcon:(SBIcon*)icon;
-(SBIconList *)iconListContainingIconWithDisplayIdentifier:(NSString *)displayIdentifier;
-(SBIconList *)addEmptyIconList;
-(void)removeEmptyIconList:(SBIconList *)list;
-(void)compactIconLists;
-(void)clearPreviousIconState;
-(void)addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
-(void)_addNewIconToDesignatedLocation:(id)designatedLocation animate:(BOOL)animate scrollToList:(BOOL)list saveIconState:(BOOL)state;
-(BOOL)_iconListsAreDirty;
-(void)deleteIconState;
-(void)_writeIconState;
-(void)saveIconState;
-(void)_replaceAppIconsWithDownloadingIcons;
-(void)_replaceAppIconWithDownloadingIcon:(id)downloadingIcon sourceList:(id)list;
-(void)relayout;
-(void)uninstallApplicationIcon:(SBIcon *)icon;
-(NSArray*)exportState;
-(NSArray *)_arrayForIconList:(SBIconList *)iconList;
-(id)_dictionaryForIcon:(SBIcon *)icon;
-(BOOL)importState:(id)state;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(id)modernIconCellForCell:(id)cell;
+(id)modernIconListForList:(id)list;
+(id)modernIconStateForState:(id)state;
-(id)firstAvailableIconListIndex:(int*)index;
-(BOOL)iconPositionInPlatformState:(id)platformState index:(int*)index inIconListNumber:(int*)iconListNumber;
#endif
#if __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_3_2
+(void)purgeIconCaches;
-(void)reloadIconImage:(id)image;
-(void)reloadIconImageForDisplayIdentifier:(NSString *)displayIdentifier;
-(id)pathForCachedIconData:(id)cachedIconData smallIcon:(BOOL)icon;
-(void)cacheImagesForIcon:(SBIcon *)icon;
-(void)_cacheImagesForIcon:(SBIcon *)icon smallIcon:(BOOL)icon2;
-(id)getCachedImagedForIcon:(SBIcon *)icon smallIcon:(BOOL)icon2;
-(id)_imageForDataAtPath:(id)path width:(unsigned)width height:(unsigned)height;
-(void)_purgeOrphanedImages;
-(id)firstAvailableIconListX:(int*)x Y:(int*)y;
-(BOOL)iconPositionInPlatformState:(id)platformState X:(int*)x Y:(int*)y inIconListNumber:(int*)iconListNumber;
#endif
@end

