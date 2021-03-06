//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTDestPhotoFlowViewController.h"

#import "UIActionSheetDelegate.h"

@class NSArray, NSString, UIButton;

@interface CTDestPhotoUploadPreviewViewController : CTDestPhotoFlowViewController <UIActionSheetDelegate>
{
    NSArray *_photoItemsArray;
    id <CTDestPhotoUploadPreviewViewControllerDelegate> _photoPreviewDelegate;
    UIButton *_deleteBtn;
}

@property(retain, nonatomic) UIButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(nonatomic) __weak id <CTDestPhotoUploadPreviewViewControllerDelegate> photoPreviewDelegate; // @synthesize photoPreviewDelegate=_photoPreviewDelegate;
@property(retain, nonatomic) NSArray *photoItemsArray; // @synthesize photoItemsArray=_photoItemsArray;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)updateTitle;
- (id)ctd_horizFlowView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (unsigned long long)ctd_numberOfCellsInHorizFlowView:(id)arg1;
- (void)ctd_didTapForAccessoriesHidden:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)deleteDidClicked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

