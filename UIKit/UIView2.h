/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "NSCoding.h"
#import "UIKit-Structs.h"
#import <UIKit/UIView.h>
#import <UIKit/UIResponder.h>
#import "UITextEffectsOrdering.h"
#import <Availability2.h>

@class NSMutableArray, CALayer, NSArray, UIScrollView, UIGestureRecognizer;

@interface UIView ()
+(Class)layerClass;
-(id)init;
-(void)_createLayerWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame;
-(void)encodeWithCoder:(id)coder;
-(void)dealloc;
-(void)setCharge:(float)charge;
-(float)charge;
-(void)_setChargeEnabled:(BOOL)enabled;
-(BOOL)_isChargeEnabled;
-(void)setTapDelegate:(id)delegate;
-(id)tapDelegate;
-(id)nextResponder;
-(void)_clearBecomeFirstResponderWhenCapable;
-(BOOL)_becomeFirstResponderWhenPossible;
-(void)startHeartbeat:(SEL)heartbeat inRunLoopMode:(id)runLoopMode;
-(void)stopHeartbeat:(SEL)heartbeat;
-(BOOL)cancelMouseTracking;
-(BOOL)cancelTouchTracking;
-(BOOL)canHandleSwipes;
-(int)swipe:(int)swipe withEvent:(GSEventRef)event;
-(void)_setBackgroundCGColor:(CGColorRef)color;
-(CGColorRef)_backgroundCGColor;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(int)_topToBottomLeftToRightViewCompare:(id)rightViewCompare;
#endif
@end

@interface UIView (SyntheticEvents)
-(id)_scriptingInfo;
-(id)scriptingInfoWithChildren;
@end

@interface UIView (UIDebugging)
-(id)_autoresizingDescription;
-(id)description;
-(void)_appendDescriptionToString:(id)string atLevel:(int)level;
-(id)recursiveDescription;
@end

@interface UIView (CALayerDelegate)
-(void)drawLayer:(id)layer inContext:(CGContextRef)context;
-(void)setValue:(id)value forKey:(id)key;
-(void)_layoutSublayersOfLayer:(id)layer;
-(id)actionForLayer:(id)layer forKey:(id)key;
@end

@interface UIView (UIViewGestures)
@property(assign, nonatomic) BOOL deliversTouchesForGesturesToSuperview;
@property(assign, nonatomic) BOOL capturesDescendantTouches;
@property(assign, nonatomic) BOOL gesturesEnabled;
@property(copy, nonatomic) NSArray* gestureRecognizers;
-(void)addGestureRecognizer:(UIGestureRecognizer*)recognizer;
-(void)removeGestureRecognizer:(UIGestureRecognizer*)recognizer;
-(void)removeAllGestureRecognizers;
@end

@interface UIView (Internal)
@property(assign, nonatomic) BOOL skipsSubviewEnumeration;
+(void)_setInvalidatesViewUponCreation:(BOOL)creation;
+(BOOL)_invalidatesViewUponCreation;
+(void)_beginDisablingPromoteDescendantToFirstResponder;
+(void)_endDisablingPromoteDescendantToFirstResponder;
+(void)_setIsResponderAncestorOfFirstResponder:(BOOL)firstResponder startingAtFirstResponder:(id)firstResponder2;
-(BOOL)_subclassImplementsDrawRect;
-(id)_layer;
-(UIScrollView*)_scroller;
-(void)_didScroll;
-(void)_invalidateSubviewCache;
-(void)_invalidateLayerContents;
-(void)_setInterceptMouseEvent:(BOOL)event;
-(id)_interceptMouseEvent:(GSEventRef)event;
-(id)_interceptEvent:(id)event;
-(BOOL)_canDrawContent;
-(void)_didMoveFromWindow:(id)window toWindow:(id)window2;
-(BOOL)_alwaysHandleScrollerMouseEvent;
-(BOOL)_alwaysHandleInteractionEvents;
-(BOOL)_isInAWindow;
-(BOOL)_shouldTryPromoteDescendantToFirstResponder;
-(BOOL)_containedInAbsoluteResponderChain;
-(void)_mouseDown:(GSEventRef)down;
-(void)_mouseDragged:(GSEventRef)dragged;
-(void)_mouseUp:(GSEventRef)up;
-(BOOL)_cancelTapDelegateTracking;
-(BOOL)_canHandleStatusBarMouseEvents:(GSEventRef)events;
-(void)_setContentImage:(id)image;
-(void)_setContentsTransform:(CGAffineTransform)transform;
-(void)_renderSnapshotWithRect:(CGRect)rect inContext:(CGContextRef)context;
-(void)_addSubview:(id)subview positioned:(int)positioned relativeTo:(id)to;
-(void)_populateArchivedSubviews:(id)subviews;
-(void)_setIsAncestorOfFirstResponder:(BOOL)firstResponder;
-(BOOL)_isAncestorOfFirstResponder;
-(BOOL)_usesDifferentHitTestForGestures;
-(id)_gestureTargetHitTest:(CGPoint)test withEvent:(id)event;
-(id)_containingScrollView;
-(void)_subscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;
-(void)_unsubscribeToScrollNotificationsIfNecessary:(id)scrollNotificationsIfNecessary;
-(id)_gestureRecognizers;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(void)_updateNeedsDisplayOnBoundsChange;
-(BOOL)_animationIsPaused;
-(void)_collectKeyViews:(id)views;
#endif
@end

@interface UIView (Deprecated)
+(void)setAnimationTransition:(int)transition forView:(id)view;
-(id)initWithSize:(CGSize)size;
-(CGSize)size;
-(void)setSize:(CGSize)size;
-(CGPoint)frameOrigin;
-(void)setFrameOrigin:(CGPoint)origin;
-(id)hitTest:(CGPoint)test forEvent:(GSEventRef)event;
-(BOOL)pointInside:(CGPoint)inside forEvent:(GSEventRef)event;
-(void)setEnabled:(BOOL)enabled;
-(BOOL)isEnabled;
-(void)setClipsSubviews:(BOOL)subviews;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(CGImageRef)createSnapshotWithRect:(CGRect)rect;
#endif
@end

@interface UIView (Animation)
+(void)beginAnimations:(id)animations;
+(void)beginAnimations:(id)animations context:(void*)context;
+(void)commitAnimations;
+(void)endAnimations;
+(void)setAnimationDelegate:(id)delegate;
+(void)setAnimationPosition:(CGPoint)position;
+(void)disableAnimation;
+(void)enableAnimation;
+(void)setAnimationsEnabled:(BOOL)enabled;
+(BOOL)areAnimationsEnabled;
+(void)setAnimationDuration:(double)duration;
+(void)setAnimationDelay:(double)delay;
+(void)setAnimationFrameInterval:(double)interval;
+(void)setAnimationStartDate:(id)date;
+(void)setAnimationStartTime:(double)time;
+(void)setAnimationCurve:(int)curve;
+(void)setAnimationRepeatCount:(float)count;
+(void)setAnimationRepeatAutoreverses:(BOOL)autoreverses;
+(void)setAnimationBeginsFromCurrentState:(BOOL)currentState;
+(void)setAnimationAutoreverses:(BOOL)autoreverses;
+(void)setAnimationFromCurrentState:(BOOL)currentState;
+(void)setAnimationRoundsToInteger:(BOOL)integer;
+(void)setAnimationTransition:(int)transition forView:(id)view cache:(BOOL)cache;
+(void)setAnimationWillStartSelector:(SEL)startSelector;
+(void)setAnimationDidStopSelector:(SEL)stopSelector;
-(void)addAnimation:(id)animation forKey:(id)key;
-(void)_removeAllAnimations:(BOOL)animations;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(BOOL)_isInAnimationBlock;
+(void)_setAnimationAttributes:(id<CAMediaTiming>)attributes;
+(void)_setAnimationFilter:(int)filter forView:(UIView*)view;
+(void)_setAnimationFilterValue:(CGFloat)value;
-(void)_clearAnimationFilters;
#else
+(BOOL)_pendingAnimations;
#endif
@end

@interface UIView (Rendering)
+(void)flush;
+(void)throttledFlush;
-(CGRect)visibleBounds;
-(BOOL)needsDisplay;
-(BOOL)needsDisplayOnBoundsChange;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)change;
-(void)setFixedBackgroundPattern:(BOOL)pattern;
-(BOOL)isHiddenOrHasHiddenAncestor;
-(void)setClearsContext:(BOOL)context;
-(void)setContentsPosition:(int)position;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
-(CGImageRef)newSnapshotWithRect:(CGRect)rect;
#else
-(CGImageRef)createSnapshotWithRect:(CGRect)rect;
#endif
-(void)forceDisplayIfNeeded;
-(void)recursivelyForceDisplayIfNeeded;
-(void)_enableLayerKitPatternDrawing:(BOOL)drawing;
@end

@interface UIView (Hierarchy)
-(BOOL)containsView:(id)view;
-(void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;
-(void)_movedToFront;
-(void)didAddSubview:(id)subview;
-(void)willRemoveSubview:(id)subview;
-(void)willMoveToSuperview:(id)superview;
-(void)didMoveToSuperview;
-(void)_didRemoveSubview:(id)subview;
-(BOOL)_doesViewControllerExistForAncestorOfView:(id)view;
-(void)_setBackgroundColor:(id)color;
-(id)_backgroundColor;
-(void)_willMoveToWindow:(id)window withAncestorView:(id)ancestorView;
-(void)_willMoveToWindow:(id)window;
-(void)willMoveToWindow:(id)window;
-(void)didMoveToWindow;
-(void)insertSubview:(id)subview below:(id)below;
-(void)insertSubview:(id)subview above:(id)above;
-(id)_findFirstSubviewWantingToBecomeFirstResponder;
-(void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object;
-(void)_makeSubtreePerformSelector:(SEL)selector withObject:(id)object withObject:(id)object3 copySublayers:(BOOL)sublayers;
-(void)_subviewInteractivityChanged:(id)changed;
-(void)deferredBecomeFirstResponder;
-(void)_promoteDescendantToFirstResponderIfNecessary;
-(void)_postMovedFromSuperview:(id)superview;
-(void)movedFromSuperview:(id)superview;
-(void)movedToSuperview:(id)superview;
-(void)viewWillMoveToSuperview:(id)view;
-(void)viewDidMoveToSuperview;
-(void)movedFromWindow:(id)window;
-(void)movedToWindow:(id)window;
-(BOOL)isDescendantOfView:(id)view;
-(id)viewWithTag:(int)tag;
-(void)setNeedsLayout;
-(void)layoutIfNeeded;
-(void)layoutBelowIfNeeded;
-(void)layoutSubviews;
#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2
+(id)topMostView:(id)view;
-(id)indexPath;
#endif
@end

@interface UIView (Geometry)
-(CGRect)frame;
-(CGRect)extent;
-(void)setFrame:(CGRect)frame;
-(CGAffineTransform)transform;
-(void)setTransform:(CGAffineTransform)transform;
-(void)setMultipleTouchEnabled:(BOOL)enabled;
-(BOOL)isMultipleTouchEnabled;
-(void)setExclusiveTouch:(BOOL)touch;
-(BOOL)isExclusiveTouch;
-(BOOL)ignoresMouseEvents;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(BOOL)pointInside:(CGPoint)inside withEvent:(id)event;
-(CGPoint)convertPoint:(CGPoint)point toView:(id)view;
-(CGPoint)convertPoint:(CGPoint)point fromView:(id)view;
-(CGSize)convertSize:(CGSize)size toView:(id)view;
-(CGSize)convertSize:(CGSize)size fromView:(id)view;
-(CGRect)convertRect:(CGRect)rect toView:(id)view;
-(CGRect)convertRect:(CGRect)rect fromView:(id)view;
-(CGRect)hitRect;
-(void)setFrame:(CGRect)frame forFields:(int)fields;
-(void)setRotationBy:(float)by;
-(void)setAutoresizesSubviews:(BOOL)subviews;
-(BOOL)autoresizesSubviews;
-(void)setAutoresizingMask:(unsigned)mask;
-(UIViewAutoresizing)autoresizingMask;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)sizeToFit;
-(void)resizeSubviewsWithOldSize:(CGSize)oldSize;
-(void)resizeWithOldSuperviewSize:(CGSize)oldSuperviewSize;
-(CGRect)bounds;
-(void)setBounds:(CGRect)bounds;
-(CGPoint)position;
-(void)setPosition:(CGPoint)position;
-(CGPoint)center;
-(void)setCenter:(CGPoint)center;
-(CGPoint)origin;
-(void)setOrigin:(CGPoint)origin;
@end

@interface UIView (Gestures_Internal)
-(id)_gestureInfo;
-(void)_gestureEnded:(GSEventRef)ended;
-(CGSize)_scrollerContentSize;
-(CGPoint)_constrainedScrollPoint:(CGPoint)point contentSize:(CGSize)size;
-(void)_zoomToScrollPoint:(CGPoint)scrollPoint scale:(float)scale duration:(float)duration event:(GSEventRef)event;
-(float)_zoomAnimationDurationForScale:(float)scale;
-(void)_zoomToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration constrainScrollPoint:(BOOL)point event:(GSEventRef)event;
-(void)_animateToScrollPoint:(CGPoint)scrollPoint;
-(void)_animateZoomFailureToWindowPoint:(CGPoint)windowPoint scale:(float)scale duration:(float)duration;
-(float)_zoomAnimationProgress;
@end

@interface UIView (Gestures)
-(void)_startGesture:(int)gesture event:(GSEventRef)event;
-(void)_stopGesture:(int)gesture event:(GSEventRef)event;
-(void)_gestureChanged:(int)changed event:(GSEventRef)event;
-(void)animator:(id)animator startAnimation:(id)animation;
-(void)animator:(id)animator stopAnimation:(id)animation;
-(CGPoint)_scrollPointForPoint:(CGPoint)point scale:(float)scale constrain:(BOOL)constrain snapToEdge:(BOOL)edge;
-(void)zoomToScale:(float)scale;
-(void)_setGestureInfoZoomScale:(float)scale;
-(void)_zoomToScale:(float)scale event:(GSEventRef)event;
-(void)_zoomToEvent:(GSEventRef)event scale:(float)scale animate:(BOOL)animate constrainScrollPoint:(BOOL)point;
-(void)_rubberbandZoomToEvent:(GSEventRef)event scale:(float)scale;
-(BOOL)_isRubberBanding;
-(void)_setZoomAnimationProgress:(id)progress;
-(float)_internalScaleForScale:(float)scale;
-(float)_scaleForInternalScale:(float)internalScale;
-(float)_minimumZoomScaleDelta __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_1);
-(float)_rubberBandScaleForScale:(float)scale;
-(BOOL)_zoomWithEvent:(GSEventRef)event;
-(BOOL)_canStartZoomFromEvent:(GSEventRef)event;
-(BOOL)_startZoomFromEvent:(GSEventRef)event;
-(void)_stopZoomFromEvent:(GSEventRef)event;
-(void)rotateToDegrees:(float)degrees;
-(void)_rotateToDegrees:(float)degrees duration:(float)duration event:(GSEventRef)event;
-(void)_setRotationAnimationProgress:(id)progress;
-(BOOL)_canStartRotationFromEvent:(GSEventRef)event;
-(BOOL)_startRotationFromEvent:(GSEventRef)event;
-(void)_rotateFromEvent:(GSEventRef)event;
-(void)_stopRotationFromEvent:(GSEventRef)event;
-(BOOL)canHandleGestures;
-(void)setGestureDelegate:(id)delegate;
-(id)gestureDelegate;
-(void)setEnabledGestures:(int)gestures;
-(int)enabledGestures;
-(void)setValue:(id)value forGestureAttribute:(int)gestureAttribute;
-(id)valueForGestureAttribute:(int)gestureAttribute;
-(void)setRotationDegrees:(float)degrees duration:(double)duration;
-(float)rotationDegrees;
-(void)_setZoomScale:(float)scale duration:(double)duration;
-(float)_zoomScale;
-(int)stateForGestureType:(int)gestureType;
-(void)_resetZoomingWithEvent:(GSEventRef)event;
-(void)gestureStarted:(GSEventRef)started;
-(void)gestureChanged:(GSEventRef)changed;
-(void)gestureEnded:(GSEventRef)ended;
@end

@interface UIView (UIAutocorrectInlinePrompt)
-(void)reduceWidth:(float)width;
@end

@interface UIView (UITouchInternalCompatibility)
-(id)_syntheticTouch;
-(id)_syntheticUIEventWithGSEvent:(GSEventRef)gsevent touchPhase:(int)phase;
@end

@interface UIView (UIWebDocumentViewEventHandling)
-(BOOL)needsWebDocumentViewEventsDirectly;
@end

@interface UIView (UITextEffectsOrdering) <UITextEffectsOrdering>
-(int)textEffectsVisibilityLevel;
-(int)compareTextEffectsOrdering:(id)ordering;
@end

@interface UIView (UIKitAccessibilityInterfaceBuilderSupport)
-(BOOL)isAccessibilityElementByDefault;
-(BOOL)isElementAccessibilityExposedToInterfaceBuilder;
@end

@interface UIView (UIGestureSorting)
-(int)_depthFirstCompare:(id)compare;
@end

@interface UIView (UIAutoscrollAdditions)
-(id)_enclosingScrollerIncludingSelf;
-(BOOL)_isScrollingEnabled;
-(id)_enclosingScrollableScrollerIncludingSelf __OSX_AVAILABLE_STARTING(__MAC_NA, __IPHONE_3_2);
@end

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_3_2

@interface UIView (ClassicAdditions)
-(BOOL)useBlockyMagnificationInClassic;
@end

@interface UIView (UIViewStyleAdditions)
+(id)_tintColorForStyle:(int)style;
-(int)_containerStyle;
-(int)_style;
@end

@interface UIView (UITextInputView)
-(id)textInputView;
@end

#endif

