//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class O2OFilterTagsListView, UILabel;

@interface O2OHeaderAndTagsView : UIView
{
    UILabel *_textLabel;
    O2OFilterTagsListView *_tagListView;
    unsigned long long _idx;
}

@property(nonatomic) unsigned long long idx; // @synthesize idx=_idx;
@property(retain, nonatomic) O2OFilterTagsListView *tagListView; // @synthesize tagListView=_tagListView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)resetStatus;
- (void)reloadData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
