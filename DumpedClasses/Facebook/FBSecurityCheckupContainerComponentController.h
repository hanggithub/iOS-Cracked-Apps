//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKComponentController.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;

@interface FBSecurityCheckupContainerComponentController : CKComponentController <UIScrollViewDelegate>
{
    _Bool _animatingScrollView;
    _Bool _touchDown;
    _Bool _finishedSectionActive;
}

- (void)scrollViewDidEndScrollingAnimationComponent:(id)arg1 scrollview:(id)arg2;
- (void)scrollViewWillEndDraggingComponent:(id)arg1 scrollData:(id)arg2;
- (void)scrollViewWillBeginDraggingComponent:(id)arg1 scrollview:(id)arg2;
- (void)scrollViewDidScrollComponent:(id)arg1 scrollview:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

