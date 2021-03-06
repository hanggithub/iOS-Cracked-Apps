//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMGeneralEventCell.h"

#import "AttributedLableDelegate.h"
#import "NMCommentsViewDelegate.h"

@class AttributedLabel, NMCommentsView, NSString, UIView;

@interface NMCommentsEventCell : NMGeneralEventCell <AttributedLableDelegate, NMCommentsViewDelegate>
{
    UIView *_outerContentView;
    AttributedLabel *_commentLabel;
    NMCommentsView *_commentsView;
}

+ (double)heightForStr:(id)arg1 Font:(id)arg2 LimitedWidth:(double)arg3 LineBreakMode:(long long)arg4;
+ (struct CGSize)shareWordsLabelSizeForEvent:(id)arg1 font:(id)arg2 color:(id)arg3 width:(double)arg4;
+ (struct CGRect)commentLabelFrameForEvent:(id)arg1 width:(double)arg2;
+ (double)heightForContentWithEvent:(id)arg1 adjustForDetailView:(_Bool)arg2;
- (void).cxx_destruct;
- (void)setCommentEventAccessibility:(id)arg1;
- (void)resourceCardTouched:(id)arg1 object:(id)arg2;
- (void)contentButtonTouched:(id)arg1 object:(id)arg2;
- (void)userNameInLabelTouched:(id)arg1 userNickName:(id)arg2;
- (void)httpLinkTouchedWithHttpURL:(id)arg1;
- (void)activityLinkTouchedWithActID:(id)arg1;
- (void)topicNameTouched:(id)arg1 topicName:(id)arg2;
- (void)topicLinkTouchedWithName:(id)arg1;
- (void)userNameTouchedWithUserNickName:(id)arg1;
- (void)attributedLabel:(id)arg1 clickedOnLink:(id)arg2;
- (void)setEvent:(id)arg1;
- (id)contentView;
- (void)clearContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

