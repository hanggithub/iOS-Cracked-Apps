//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, XMPPIQ, XMPPJID, XMPPMUC, XMPPMessage;

@protocol XMPPMUCDelegate

@optional
- (void)xmppMUC:(XMPPMUC *)arg1 didFetchAllChatroomList:(NSArray *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 didFetchAllPublicRoomList:(NSArray *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 didFetchMyRoomsList:(NSArray *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 didFetchServices:(NSArray *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 roomJID:(XMPPJID *)arg2 didNotCheckRoomExistency:(XMPPIQ *)arg3;
- (void)xmppMUC:(XMPPMUC *)arg1 roomJID:(XMPPJID *)arg2 didCheckRoomExistency:(XMPPIQ *)arg3;
- (void)xmppMUC:(XMPPMUC *)arg1 didReceiveBeKickFromGroup:(XMPPMessage *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 didReceiveAcceptApplyJoinGroup:(XMPPMessage *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 didReceiveRejectApplyJoinGroup:(XMPPMessage *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 didReceiveApplyJoinGroup:(XMPPMessage *)arg2;
- (void)xmppMUC:(XMPPMUC *)arg1 roomJID:(XMPPJID *)arg2 didReceiveInvitationDecline:(XMPPMessage *)arg3;
- (void)xmppMUC:(XMPPMUC *)arg1 roomJID:(XMPPJID *)arg2 didReceiveInvitation:(XMPPMessage *)arg3;
@end

