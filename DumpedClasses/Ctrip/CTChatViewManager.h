//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CTChatImagePickerMangerDelegate.h"
#import "CTTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTChatConversation, CTChatConversationViewController, CTChatGroupInfo, CTChatMessage, CTChatUserInfo, CTFetchedResults, CTFetchedResultsController, CTTableView, NSString;

@interface CTChatViewManager : NSObject <UITableViewDataSource, UITableViewDelegate, CTChatImagePickerMangerDelegate, CTTableViewDelegate>
{
    _Bool _isUserInGroup;
    CTChatUserInfo *_oppositeUser;
    CTChatGroupInfo *_oppositeGroup;
    CTChatConversation *_conversation;
    CTFetchedResultsController *_messagesController;
    CTFetchedResults *_fetchedResults;
    CTTableView *_tableView;
    NSString *_director;
    CTChatMessage *_loadingMessage;
    CTChatConversationViewController *_chatViewController;
    NSString *_maxMessageID;
}

+ (id)managerWithConversationId:(id)arg1 andType:(long long)arg2 viewController:(id)arg3;
@property(retain, nonatomic) NSString *maxMessageID; // @synthesize maxMessageID=_maxMessageID;
@property(nonatomic) __weak CTChatConversationViewController *chatViewController; // @synthesize chatViewController=_chatViewController;
@property(retain, nonatomic) CTChatMessage *loadingMessage; // @synthesize loadingMessage=_loadingMessage;
@property(nonatomic) _Bool isUserInGroup; // @synthesize isUserInGroup=_isUserInGroup;
@property(retain, nonatomic) NSString *director; // @synthesize director=_director;
@property(nonatomic) __weak CTTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak CTFetchedResults *fetchedResults; // @synthesize fetchedResults=_fetchedResults;
@property(retain, nonatomic) CTFetchedResultsController *messagesController; // @synthesize messagesController=_messagesController;
@property(retain, nonatomic) CTChatConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) CTChatGroupInfo *oppositeGroup; // @synthesize oppositeGroup=_oppositeGroup;
@property(retain, nonatomic) CTChatUserInfo *oppositeUser; // @synthesize oppositeUser=_oppositeUser;
- (void).cxx_destruct;
- (void)sendImageMessage:(id)arg1;
- (void)ct_imagePicker:(id)arg1 didFinishedPickScaledImages:(id)arg2;
- (void)loadMoreDataBeforeDate:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)updateTableViewDataWithHistoryMessages:(id)arg1;
- (void)loadHistoryBeforeMessage:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (void)pullDownToRefreshData:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (double)heightForIndexPath:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)objectAtIndexPath:(id)arg1;
- (id)indexPathForLastObject;
- (void)gotoOtherMemberWith:(id)arg1 fromViewController:(id)arg2;
- (id)getGroupChatRightItemBars;
- (id)getSingleChatRightItemBars;
- (void)autoResendSendingMessage;
- (id)getRightItemBars;
- (void)updateReadMessageToServiceType:(id)arg1;
- (void)updateTableViewDataWithSendMessage:(id)arg1;
- (void)updateTableViewDataWithReciveMessages:(id)arg1;
- (void)updateTableViewDataWithReciveMessage:(id)arg1;
- (_Bool)isNeedShowBroadCast;
- (long long)gthemetype;
- (long long)gdesttype;
- (long long)businessType;
- (void)deleteCell:(id)arg1;
- (id)getImageItemWithImageContent:(id)arg1;
- (id)getMyGroupNickName;
- (id)title;
- (void)getLatestMessageV2;
- (void)getLatestMessageV;
- (void)getLatestMessage;
- (id)initWithWithConversationId:(id)arg1 andType:(long long)arg2 viewController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
