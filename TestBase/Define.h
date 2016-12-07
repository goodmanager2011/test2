//
//  Define.h
//  NaturapassMetro
//
//  Created by Giang on 7/22/15.
//  Copyright (c) 2015 PHS. All rights reserved.
//

#ifndef NaturapassMetro_Define_h
#define NaturapassMetro_Define_h

//Height of Navigation customized
#define HEIGHT_CUSTOM_NAV 85 //44+30+20

//Mapping with OUTLET
#define START_SUB_NAV_TAG 10
//TEXT
#define TEXT_START_SUB_NAV_TAG 40

//DATE
#define stringUTCDateFormat						@"yyyy-MM-dd"
#define stringUTCMonthDayFormat					@"MM-dd"
#define stringUTCDateTimeFormat		 			@"yyyy-MM-dd HH:mm:ss"
#define stringGMT_G_Format                      @"yyyy-MM-dd'T'HH:mm:ss"

//Vendredi 1 janvier
//Jeudi 31 décembre 2015
#define stringRFC822DateTimeFormatYear              @"EEE d MMM yyyy"
#define stringRFC822DateTimeFormatNoYear              @"EEE d MMM"

#define	stringGeneralFullDateFormat 			@"MM/dd/yyyy"
#define	stringGeneralMonthYearDateFormat 		@"MM/yyyy"
#define stringGeneralMonthDayFormat				@"MM/dd"
#define	stringGeneralYearDateFormat  			@"yyyy"

#define	stringDatePicker  			@"dd/MM/yyyy HH:mm"

//key get sqlite
//publication shape group hunt distributor address favorite
#define kSQL_publication @"publication"
#define kSQL_shape @"shape"
#define kSQL_group @"group"
#define kSQL_hunt @"hunt"
#define kSQL_agenda @"agenda" //to get all hunts

#define kSQL_distributor @"distributor"
#define kSQL_address @"address"
#define kSQL_favorite @"favorite"

#define kSQL_breed @"breed"
#define kSQL_type @"type"
#define kSQL_brand @"brand"
#define kSQL_calibre @"calibre"


#define MAX_COUNT_RECORD 1000

//VIEW

#define TAG_MAIN_NAV_VIEW 100
#define TAG_SUB_NAV_VIEW 120

//POP MENU
#define MENU_POPOVER_FRAME  CGRectMake(8, 100, 140, 88)

#define SUGGEST_LIST @"suggestList"

#define CHECKSTRING(strIN) strIN == nil ? @"": strIN

//MAP
#define MAXZOOM 18
#define MINZOOM 7
#define kSizeMarkerZoom      12

#define MessageType @"message"
#define PublicationType @"publication"
#define PublicationTextType @"publicationText"
#define DetailType @"LiveDetailMur"


#define user            @"user"
#define courtesy        @"courtesy"
#define email           @"email"
#define firstname       @"firstname"
#define lastname        @"lastname"
#define passworddd        @"password"
#define MDphoto           @"photo"
#define comment         @"comment"
#define _content         @"content"
#define publication     @"publication"
#define sharing         @"sharing"
#define currentlatitude        @"latitude"
#define currentlongitude       @"longitude"
#define currentAltitude  @"altitude"
#define share           @"share"
#define withouts        @"withouts"
#define shareWithout    @"shareWithout"
#define geolocation     @"geolocation"
#define myaddress         @"address"

#define MDaddress         @"address"
#define countryName     @"country"
#define media           @"media"
#define participation   @"participation"
#define media           @"media"
#define publicationgroups @"publication[groups]"

#define NEED_REFRESH_FILTER @"Need_Refresh_Filter"
#define HScreen [[UIScreen mainScreen] bounds].size.height
#define WScreen [[UIScreen mainScreen] bounds].size.width
#define iOS7 [[[UIDevice currentDevice]systemVersion] floatValue] >= 7.0

//File name

#define PATH_STORE_CACHE @"NATURA_CACHE"

//store temp image --> clean
#define PATH_STORE_TEMP @"NATURA_TEMP"
#define PATH_STORE_NATURA_PDF_INBOX @"NATURA_PDF_INBOX"
#define PATH_STORE_NATURA_PDF_CACHE @"NATURA_PDF_CACHE"

#define PATH_STORE_TMP_PHOTO_VIDEO_SELECTED @"TMP_PHOTO_VIDEO_SELECTED"


#define MY_FRIEND_SAVE @"Friend.save"

#define FILE_MUR_SAVE @"Mur.save"
#define FILE_GROUP_MUR_SAVE @"Group.Mur.save"
#define FILE_CARTE_SAVE @"Carte.save"
#define FILE_CHASSE_MUR_SAVE @"Chasse.Mur.save"

// Voi chien
#define FILE_PROFILE_MULTI_DOGS @"Profile.Dogs.save"
#define FILE_PROFILE_MULTI_WEAPONS @"Profile.Weapons.save"
#define FILE_PROFILE_MULTI_PAPERS @"Profile.Papers.save"



#define SHARE_MES_GROUP_SAVE @"ShareMesGroup.save"

#define SHARE_MES_HUNT_SAVE @"ShareMesHunt.save"

#define FILTER_PERSONNE_SAVE @"FilterPersonne.save"
#define FILTER_MES_HUNT_SAVE @"FilterMesHunt.save"
#define FILTER_MES_GROUP_SAVE @"FilterMesGroup.save"

#define FILE_CHASSE_MUR_PASS_SAVE @"Chasse.Mur.Pass.save"
#define FILE_LOG @"LOG.txt"
#define FILE_HOME_NEWS_SAVE @"Home.News.save"
#define FILE_CHATLISTE_SAVE @"Chat.List.save"
#define LIVE_MAP_CHAT_SAVE @"live.map.chat.save"


#define LIVE_HUNT_HOME_SAVE @"live.hunt.save"

//
#define FILE_PUBLICATION_COLOR_SAVE @"PublicationColor.save"

//Cache Categories
#define CACHE_SPECIFIC_CARDS @"CACHE_SPECIFIC_CARDS.save"
#define CACHE_CARDS @"CACHE_CARDS.save"
#define CACHE_TREE @"CACHE_TREE.save"

#define MAXIMUM_ZOOM 20


//Define notification
#define publication_commented           @"publication.commented"
#define publication_same_commented      @"publication.same_commented"
#define publication_liked               @"publication.liked"
#define publication_processed_success   @"publication.processed.success"
#define publication_shared   @"publication.shared"





#define lounge_join_accepted            @"lounge.join.accepted"
#define lounge_join_asked               @"lounge.join.asked"
#define lounge_join_invited             @"lounge.join.invited"
#define lounge_join_valid_asked         @"lounge.join.valid-asked"
#define lounge_chat_new_message         @"lounge.chat.new_message"

//pending confirm.
#define lounge_status_changed         @"lounge.status.changed"

#define group_join_accepted             @"group.join.accepted"
#define group_join_asked                @"group.join.asked"


//#define group_invite_group            @"group.invite.group"
#define group_join_invited              @"group.join.invited"
#define group_join_valid_asked          @"group.join.valid-asked"
#define group_chat_new_message          @"group.chat.new_message"

#define user_friendship_asked           @"user.friendship.asked"
#define user_friendship_confirmed           @"user.friendship.confirmed"

// chua xu ly
#define lounge_invite_friend            @"lounge.invite.friend"
#define lounge_invite_group             @"lounge.invite.group"
#define lounge_join_refused             @"lounge.join.refused"
#define group_invite_friend             @"group.invite.friend"
#define group_join_refused              @"group.join.refused"
#define group_subcriber_banned          @"group.subscriber.banned"

#define discussion_new_message          @"chat.new_message"
#define lounge_discussion_new_message          @"chat"

#define NOTIFICATIONTIMER      @"NOTIFICATIONTIMER"
#define NOTIFICATIONLOUNGESUSCRUBERADMIN                      @"LoungeSuscriberAdminAction"

#define NOTIFICATION_REQUEST_UPDATING      @"NOTIFICATION_REQUEST_UPDATING"

#define NOTIFICATION_REQUEST_UPDATING_BADGE      @"NOTIFICATION_REQUEST_UPDATING_BADGE"
#define NOTIFICATION_UPDATING_UPLOAD_COUNT      @"NOTIFICATION_UPDATING_UPLOAD_COUNT"


#define KILL_TEXT_FOCUS      @"KILL_TEXT_FOCUS"

#define NOTIFY_REFRESH_MES      @"NOTIFY_REFRESH_MES"
#define NOTIFY_REFRESH_MES_NEW      @"NOTIFY_REFRESH_MES_NEW"
#define NOTIFY_REFRESH_MES_CHASSES      @"NOTIFY_REFRESH_MES_CHASSES"
#define NOTIFY_REFRESH_MES_CHASSES_PASS      @"NOTIFY_REFRESH_MES_CHASSES_PASS"
#define NOTIFY_REFRESH_GROUP      @"NOTIFY_REFRESH_GROUP"
#define NOTIFY_REFRESH_CHASSE      @"NOTIFY_REFRESH_CHASSE"



#define UPDATE_UPLOADING_PROGRESS      @"UPDATE_UPLOADING_PROGRESS"
#define UPDATE_CACHE_CHAT      @"UPDATE_CACHE_CHAT"

#define DISABLE_CHAT @"DISABLE_CHAT"

#define UPDATE_RIGHT_CHAT @"UPDATE_RIGHT_CHAT"

//CHAT
#define messageWidth 260

#define ktextByme       @"textByme"
#define ktextbyother    @"textByOther"
#define kImageByme      @"ImageByme"
#define kImageByOther   @"ImageByOther"

#define kStatusSeding   @"Sending"
#define kStatusSent     @"Sent"
#define kStatusFailed   @"Failed"

#define kMe          @"ME"
#define kYou       @"YOU"

#define kSending            @"Sending"
#define kSent               @"Sent"
#define kFailed             @"Failed"

#define PROFILE_MULTI_DOGS               @"dogs"
#define PROFILE_ONE_DOG                 @"dog"
#define PROFILE_MULTI_WEAPONS           @"weapons"
#define PROFILE_ONE_WEAPON             @"weapon"

#define PROFILE_MULTI_PAPERS           @"papers"
#define PROFILE_ONE_PAPER             @"paper"
//DEFINE STRING LOCALIZATION HERE
//NSLocalizedString(@"kWarnChatMessage", @"")
#define kWarnChatMessage    @"Warn_Chat_Offline"


#define     A4_W                612
#define     A4_H                792
#define     Letter_W            215.9
#define     Letter_H            279.4
#define     A3_W                297
#define     A3_H                420
#define     A5_W                148
#define     A5_H                210
#define     Legal_W             215.9
#define     Legal_H             355.6
#define     BusinessCard_W      85.60
#define     BusinessCard_H      53.98

#define concatstring(str1,str2) [NSString stringWithFormat:@"%@_%@",str1,str2]


#define TWO_THIRDS_OF_PORTRAIT_WIDTH (UIScreen.mainScreen.bounds.size.width * 0.6666667f)

#define UICOLOR_BLUE [UIColor colorWithRed:140.0/255.0 green:187.0/255.0 blue:24.0/255.0 alpha:1.0]
#define HEIGHT_MEDIA_MAX        265
#define HEIGHT_MEDIA_MIN        0

#define POP_MENU_VIEW_TAG1       88888
#define POP_MENU_VIEW_TAG2       99999

#define MENU_ITEM_TAG1          10
#define MENU_ITEM_TAG2          11


#define POST_MESSAGE            0
#define POST_PHOTO              1
#define POST_VIDEO              2
//group
#define IS_INFOS                0
#define IS__MEMBRES             1
#define IS_ADMIN                2
#define IS_BANNIR               3
//
#define UI_GROUP_MUR_ADMIN      0
#define UI_GROUP_MUR_NORMAL     1
#define UI_GROUP_TOUTE          2
#define UI_CHASSES_MUR_ADMIN    3
#define UI_CHASSES_MUR_NORMAL   4
#define UI_CHASSES_TOUTE        5
#define UI_CARTE                6
#define UI_DISCUSSION           7
#define UI_AMIS_DELETE          8


#define UIColorFromRGBAlpha(rgbValue,x) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:x]

#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]

//Login text color
#define COLOR_LOGO_CCPA 0x1B9FE5



#define TABLE_BACKGROUND_COLOR 0xECEDF0
#define MAIN_COLOR 0xF0F0F0

#define GROUP_TINY_BAR_COLOR 0x1B9FE5
#define GROUP_MAIN_BAR_COLOR 0x1B9FE5

#define MUR_TINY_BAR_COLOR 0x1B9FE5
#define MUR_MAIN_BAR_COLOR 0x1B9FE5
#define SUB_NAV_BAR_COLOR 0x537811

#define CHASSES_TINY_BAR_COLOR 0x1B9FE5
#define CHASSES_MAIN_BAR_COLOR 0x1B9FE5

//AMIS
#define AMIS_TINY_BAR_COLOR 0x1B9FE5
#define AMIS_MAIN_BAR_COLOR 0x1B9FE5


#define CARTE_TINY_BAR_COLOR 0x1B9FE5
#define CARTE_MAIN_BAR_COLOR 0x1B9FE5
//#define AMIS_SUB_NAV_BAR_COLOR 0x537811

#define DISCUSSION_TINY_BAR_COLOR 0x1B9FE5
#define DISCUSSION_MAIN_BAR_COLOR 0x1B9FE5

#define DISCUSSION_BACK 0x1B9FE5

#define GROUP_CHAT_CALLOUT 0x009e9a
#define CHASSE_CHAT_CALLOUT 0x825e41
#define DISCUSSION_CHAT_CALLOUT 0xed612a
#define LIVE_MAP_MAIN_BAR_COLOR 0xbe0500
#define LIVE_MAP_TINY_BAR_COLOR 0xbe0500
//#define LIVE_MAP_TINY_BAR_COLOR 0xAF0004


#define TEXT_NAME_BOLD_COLOR 0x74A605

#define BUTTON_DESINSCRIRE_COLOR 0xD73208

#define MUR_BACK 0x1B9FE5
#define MUR_CANCEL 0xC2280E

#define GROUP_BACK 0x1B9FE5
#define GROUP_CANCEL 0xC32808

#define CHASSES_BACK 0x1B9FE5
#define CHASSES_CANCEL 0xC32808

#define CARTE_BACK 0x1B9FE5

#define MAPTYPE_COLOR 0x1B9FE5

#define ON_SWITCH 0x1B9FE5
#define OFF_SWITCH 0x6D7172

#define ON_SWITCH_GROUP 0x1B9FE5
#define OFF_SWITCH_GROUP 0x6D7172

#define ON_SWITCH_CHASSES 0x1B9FE5
#define OFF_SWITCH_CHASSES 0x6D7172

#define ON_SWITCH_CARTE 0x1B9FE5
#define OFF_SWITCH_CARTE 0x6D7172

#define ON_SWITCH_PARAM 0x1B9FE5
#define OFF_SWITCH_PARAM 0x6D7172

#define GROUP_MUR_ADMIN_COLOR 0x1B9FE5
#define GROUP_MUR_NORMAL_COLOR 0x1B9FE5
#define GROUP_MUR_CANCEL_COLOR 0xD93208

#define GROUP_TOUS_COLOR 0x1B9FE5

#define PARTICIPE_COLOR 0x85b916
#define NE_SAIS_PAS_COLOR 0xEA8627
#define NE_PARTICIPE_PAS_COLOR 0xE91E20
#define BTN_REFUSER_COLOR 0xCE4B19

#define PARAM_TINY_BAR_COLOR 0x1B9FE5
#define PARAM_MAIN_BAR_COLOR 0x1B9FE5
#define TEXT_SUBNAVI_COLOR 0x959593
#define BUTTON_COLOR 0x3C3C3A

//Discussion cell color
#define DISCUSSION_CELL_ACTIVE_COLOR 0xfbdfd3
#define DISCUSSION_CELL_WHITE_COLOR 0xFFFFFF
#define CHASSES_CELL_ACTIVE_COLOR 0xe4dcd5
#define NOTIFI_CELL_ACTIVE_COLOR 0xe6efd2
#define FAVO_ACTIVE_COLOR 0xF4CEC2
#define DOCUMENT_CELL_CHECK 0x198AFB
#define DISTRIBUTION_TEXT 0x525252
#define SUBNAVE_COLOR 0x3B3D3B
#define FILTER_VIEW_COLOR 0xF3F3F1
#define FILTER_VIEW_CELL_COLOR 0xECECEC

#define EMPTY_FRIENDINFO @"%@ n'a pas encore de publication"

/*def new string*/
#define strRequestTimeout @"strRequestTimeout"

#define strPlaceHolderFilter_Csearch @"strPlaceHolderFilter_Csearch"

#define strWarningNotAllowSendMessage @"strWarningNotAllowSendMessage"

#define strWarningInputDialogAllowAddShow @"strWarningInputDialogAllowAddShow"
#define strEdit_Add_Show_Agenda_chat @"strEdit_Add_Show_Agenda_chat"

#define strEdit_Add_Show_Agenda_publications @"strEdit_Add_Show_Agenda_publications"


#define strTitle_Add_Show_Publication_1 @"strTitle_Add_Show_Publication_1"
#define strTitle_Add_Show_Publication   @"strTitle_Add_Show_Publication"
#define strAgenda_Add_Publication       @"strAgenda_Add_Publication"
#define strAgenda_Show_Publication      @"strAgenda_Show_Publication"

#define strTitle_Add_Show_Chat_1 @"strTitle_Add_Show_Chat_1"
#define strAgenda_Add_Chat @"strAgenda_Add_Chat"
#define strAgenda_Show_Chat @"strAgenda_Show_Chat"
#define strTitle_Add_Show_Chat @"strTitle_Add_Show_Chat"


#define strLogo @"logo"
#define strLogo_print @"cartouche-naturapass-print"
#define strIcon_All_Member @"naturepass"

#define strIC_chasse_invite_member @"ic_chasse_invite_member"
#define strIC_chasse_non_member @"ic_chasse_non_member"
#define strIC_chasse_amis @"ic_chasse_amis"
#define strIC_chasse_group @"ic_chasse_group"
#define strIC_chasse_info @"ic_chasse_info"
#define strIC_chasse_admin_setting @"ic_chasse_admin_setting"

#define strIC_group_amis @"ic_invite_my_amis"
#define strIC_group_invite_mesgroup @"ic_invite_my_group"
#define strIC_group_member_natura @"ic_member_natura"
#define strIC_group_non_member @"ic_non_member"
#define strIC_group_setting_info @"ic_group_setting_info"
#define strIC_group_setting_admin @"ic_group_setting_admin"
#define strIC_group_setting_bannir @"ic_group_setting_bannir"

#define strTitle_app @"Title_app"
#define strRatingAppStore @"THANKYOU_FORRATING"
#define strJeneveuxpas @"Je ne veux pas"
#define strPlustard @"Plus tard"
#define strOui @"Oui"
#define strDeconnexion @"DÉCONNEXION"
#define strEtesvousSurDevouloirvousdeconecter @"Êtes-vous sûr de vouloir vous déconnecter de?"
#define strAnuler @"ANNULER"
#define strValider @"VALIDER"
#define strNETWORK @"NETWORK"
#define strOK @"OK"
#define strClose @"Close"
#define strEMPTY @""
#define strREQUESTSENT @"REQUESTSENT"
#define strPREVIOUS @"PREVIOUS"
#define strNEXT @"NEXT"
#define strMonStatut @"Mon statut"
#define strTypeAffichagedelacarte @"Type d'affichage de la carte"
#define strVent @"Vent"
#define strFilterParTypeDeContenu @"Filtrer par type de contenu"
#define strFilterParTypeDePartage @"Filtrer par type de partage"

#define strMesGroupes @"Mes groupes"
#define strMesChantier @"Mes agenda"
#define strMeteo @"Météo"
#define strAdresseIntrouble @"Adresse introuvable"
#define strTableuauDeBord @"TABLEAU DE BORD"
#define strGROUPES @"GROUPES"
#define strCHANTIERS @"AGENDA"
#define strCARTE @"CARTE"
#define strPARAMETRES @"PARAMETRES"
#define strWarningZoom @"Aucun repère ne sera chargé dans ce niveau de zoom. Si vous voulez charger des repères, il vous faut zoomer sur la zone qui les concerne."
#define strWarningONWithoutSelection @"Votre filtre est actif, mais aucune option n'est sélectionnée. Aucune publication ne s'affichera sur la carte."
#define strSorryNoCamera @"Sorry_No_Camera"
#define strNoChantierInvitation @"Vous n'avez ni demandé l’accès à  un agenda, ni reçu d'invitation"
#define strAccessPrivate @"Accès Privé"
#define strAccessSemiPrivate @"Accès Semi-Privé"
#define strAccessPublic @"Accès Public"
#define strYouHaveNoChasse @"Pas de connexion. Vous ne pouvez pas charger cette page"
#define strTryAgainWithYourGoodNetwork @"Votre réseau n'est pas assez bon pour charger votre agenda. Veuillez réessayer quand vous aurez une meilleure connexion."
#define strDeleteJoinMessageChasse @"delete_join_message_chasse"
#define strDeleteJoinTitleChasse @"delete_join_title_chasse"

#define strYES @"Yes"
#define strNO  @"No"
#define strCloseChasse @"close_chasse"
#define strDoyouwanttojoin @"Serrai-je présent ?"
#define SilvousplaitentrezPrenomValide @"S'il vous plaît entrez Prénom valide"
#define SilvousplaitentrezNomValide @"S'il vous plaît entrez Nom valide"
#define strRejoinLoungPublic @"Rejoindre_un_loung_public"
#define strRejoinAcceptPublic @"Rejoindre_accept_public"

#define strRejoinUnLoung @"Rejoindre_un_loung"
#define strRejoinAcceptPrivate @"Rejoindre_accept_prive"
#define strRejoinAcceptSemi @"Rejoindre_accept_semi"
#define strAcceptInvitationTourChasse @"accept_invition_tourchasse"
#define strEtesVousSurDeVouloiranuilervotresaisie @"Etes-vous sûr de vouloir annuler votre saisie ?"
#define strMessage10 @"Etes-vous sûr de vouloir annuler votre saisie ?\nVous pouvez sortir sans annuler en cliquant sur le retour menu en haut à gauche. Vous retrouverez votre %@ en revenant dans cette rubrique."
#define strAlertTimeIssue @"ALERT_debut_TIME_ISSUE"
#define strRemplirtoutleschamps @"Remplir tout les champs"
#define strMessage11 @"Seules les personnes invitées dans votre agenda pourront accéder à votre agenda et en connaîtront l'existence."

#define strMessage12 @"Tous le agenda auront accès à votre agenda, mais vous validerez chaque nouvelle inscription.\nVotre agenda sera visible par tout le monde dans la rubrique \"Toutes le agenda\"."
#define strMessage13 @"Tous le agenda auront accès à votre agenda sans restriction. Votre action se limitera à bannir d'éventuels membres indésirables.\nVotre agenda sera visible par tout le monde dans la rubrique \"Toutes le agenda\"."
#define strMessage14 @"Félicitations !"
#define strMessage15 @"Votre événement a été ajouté avec succès dans votre agenda."
#define strMessage16 @"Suppression adresse"
#define strMessage17 @"Etes-vous sûr de vouloir supprimer cette publication favorite ?"
#define strMessage18 @"Saisissez ici vos adresses favorites.\nElles vous permettront de naviguer plus rapidement sur la carte.\nQuand vous vous connectez sur la carte, vous êtes centré automatiquement sur l\'adresse par défaut."
#define strMessage19 @"Etes-vous sûr de vouloir supprimer cette adresse ?"
#define strMessage20 @"La photo a été mise à jour avec succès"
#define strMessage21 @"Votre profil a été sauvegardé!"
#define strMessage22 @"Votre filtre est actif, mais aucune option n'est sélectionnée. Aucune publication ne s'affichera sur le mur."
#define strMessage23 @"Êtes-vous sûr de vouloir supprimer cette publication"
#define strMessage24 @"Suppression publication"
#define strMessage25 @"Tapez votre message"
#define strMessage26 @"Votre adresse email et/ou votre mot de passe est/sont faux. Si vous avez oublié votre mot de passe, allez dans Mot de passe oublié."
#define strMessage27 @"Votre adresse email et/ou votre mot de passe sont faux. Veuillez les corriger ou faire une demande de mot de passe dans la rubrique Mot de passe oublié"
#define strMessage28 @"Veuillez renseigner votre adresse e-mail"
#define strMessage29 @"Veuillez saisir un mot de passe"
#define strMessage30 @"Votre compte Facebook ne possède pas d'email.\nNous ne pouvons malheureusement pas valider votre inscription par Facebook.\nMerci de réaliser une inscription manuelle !"

#define strMessage31 @"strMessage31"
#define strMessage32 @"strMessage32"
#define strMessage33 @"strMessage33"

//mld
#define strINVITATIONSAMIS @"INVITATIONS AMIS"
#define strINVITEZVOSAMIS @"INVITEZ VOS AMIS"
#define strSelectionnezToutLeMonde @"Sélectionnez tout le monde"
#define strDescriptionAmisAddScreen @"Pour partager vos photos, videos, points de géolocalisation, chasses. Invitez vos amis à vous rejoindre sur Naturapass en les sélectionnant ou en inscrivant leur email."
#define strAjouterAmisAddScreen @"Sélectionnez tout le monde"
#define strUneConnexionInternetEstRequise @"Une connexion internet est requise."
#define strAdresseIntrouvable @"Adresse introuvable"
#define strMonAgenda @"mon agenda"
#define strRecherche @"recherche"
#define strHistorique @"historique"
#define strInvitations @"invitations"
#define strMur @"mur"
#define strCarte @"carte"
#define strDiscussion @"discussion"
#define strParametres @"paramètres"
#define strInvites @"invités"
#define strInfos @"infos"
#define strAgenda @"agenda"
#define strMesgroupes @"mes groupes"
#define strAmis @"amis"
#define strInviter @"inviter"
#define strFiltres @"filtres"
#define strProfil @"profil"
#define strGeneral @"général"
#define strEmail @"email"
#define strMobile @"mobile"
#define strFavoris @"favoris"
#define strAjoutDunRepere @"Ajout d'un repère"
#define strVousAvezFaitUnePublicationGeo @"Vous avez fait une publication geolocalisée ici. Retournez sur le mur pour la compléter."
#define strMOI @"Moi"
#define strMYFRIEND @"MYFRIEND"
#define strMEMBER @"MEMBER"
#define strSelectionLeTypeDaffichagedeCarte @"Sélectionnez le type d'affichage de carte que vous désirez"
#define strSelectionLeTypeContenu @"Sélectionnez le type contenu que vous souhaitez faire apparaitre"
#define strSelectionVotreStatut @"Sélectionnez votre statut."
#define strFERMER @"FERMER"
#define strSelectionLesReperes @"Sélectionnez les repères que vous voulez faire apparaître."
#define strSelectionLesParticipants @"Sélectionnez le participants que vous souhaitez faire apparaitre"
#define strDEBUTLE @"DEBUT LE"
#define strFINLE @"FIN LE"
#define strRendezVousA @"RENDEZ-VOUS À"
#define strVOIRSURNATURAPASS @"VOIR SUR NATURAPASS"
#define strVOIRSURAUTRESGPS @"VOIR SUR AUTRES GPS"
#define strSerraiJePresent @"Serrai-je présent ?"
#define strINVITERDESNONNATIZ @"INVITER DES NON-NATIZ"
#define strNonNatizDesc1 @"Vous avez 2 solutions pour inscrire des non-natiz à votre chasse :"
#define strNonNatizDesc2 @"- soit en leur envoyant un email pour qu’ils s’inscrivent à Naturapass"
#define strNonNatizDesc3 @"- soit en les inscrivant vous-même à la main. Ils ne deviendront pas Natiz :-(."
#define strSUIVANT @"SUIVANT"
#define strPlaceholder @"Commentaire (facultatif)"
#define strDescriptionPlaceholder @"Description (facultatif)"
#define strAnnulerAgenda @"Annuler Agenda"
#define strDescHelpAgenda @"Les groupes vous permettent de vous rassembler avec les membres de votre chasse et/ou par centre d’intérêt. \n Ils vous permettent de: \n- discuter et d’échanger des infos entre vous sur le mur de votre groupe, \n - de créer la carte de votre groupe (idéal pour partager des informations cartographiques avec les membres de votre chasse \n- postes, bauge à sanglier, terrier de renard, équipement à réparer...) \n - de lancer des invitations rapidement pour vos battues.\nExemples de groupes : les chasseurs de mon village, les fans de bécasses, les chasseurs à l’arc…"
#define strDateDeFin @"Date de fin"
#define strDateDeDebut @"Date de début"
#define strNom @"Nom"
#define strENSAVOIRPLUS @"EN SAVOIR PLUS ?"
#define strINFORMATIONS @"INFORMATIONS"
#define strTYPEDACCES @"TYPE D’ACCES"
#define strLieuDeRendezVous @"Lieu \nde rendez vous"
#define strVousPermet @"Vous permet de préciser sur une carte le lieu de rendez-vous."
#define strINVITERDESPARTICPANTS @"INVITER DES PARTICPANTS"
#define strVousPouvezInviter @"Vous pouvez inviter des personnes. Si elles sont Natiz, elles recevront une invitation sur leur smartphone."


#define strInviterMesAmisNaturapass @"INVITER MES AMIS NATURAPASS"
#define strPourInviterDesAmis @"Pour inviter des amis à rejoindre votre chasse veuillez les selectionner."
#define strInviterDesPersonnes @"INVITER DES PERSONNES DANS VOTRE NOUVELLE CHASSE"
#define strIciVousPouvez @"Ici vous pouvez inviter:"
#define strIensembleDesMembres @"- I'ensemble des membres d'un de vos chasses en cliquant sur Envoyer."
#define strSeulementCertains @"- Seulenment certains membres de ces chasses en cliquant sur Membres."

#define strINVITERDESMEMBRESNATURAPASS @"INVITER DES MEMBRES NATURAPASS"
#define strPourInviterDesMembresNaturapass @"Pour inviter des membres Naturapass à rejoindre votre chasse, rentrez leur nom."
#define strAucunResultat @"Aucun résultat"
#define strLaPersonneQueVousRecherchez @"La personne que vous recherchez n'est peut-être pas inscrite à Naturapass. Vous pouvez lui envoyer un email pour le prévenir."
#define strEmailContentPlaceholder @"  Votre message"
#define strRechercherUnMembre @"Rechercher un membre"
#define strTokenPlaceholder @"Emails séparés par des ;"
#define strAdresseEmailNonValide @"Adresse e-mail non valide"
#define strEnvoyer @"ENVOYER"
#define strInviterDesNonMembrer @"INVITER DES NON-MEMBRES NATURAPASS"
#define strPourLesPersonnesQui @"Pour les personnes qui ne sont pas inscrites à Naturapass, vous pouvez leur envoyer un email pour les prévenir."
#define strSouhaitezVousImporter @"Souhaitez-vous importer la carte de votre groupe ?"
#define strVousPermetDePartager @"Vous permet de partager les points de votre groupe avec vos invités (postes, miradors,…)."
#define strAdministrationDunEvenement @"ADMINISTRATION D'UN EVENEMENT"
#define strModificationParticipant @"MODIFICATION PARTICIPANT"
#define strCommentaire @"Commentaire"
#define strTERMINER @"TERMINER"
#define strListeDeVosInvitations @"LISTE DE VOS INVITATIONS"
#define strVousNavezNiDemande @"Vous n'avez ni demandé l’accès à  un événement, ni reçu d'invitation"
#define strAgendaMesEvenementsPasses @"AGENDA – MES EVENEMENTS PASSES"
#define strMONAGENDA @"MON AGENDA"
#define strAllezVouzParticiper @"Allez-vous participer à cet événement ?"
#define strTousLesEvenements @"TOUS LES EVENEMENTS"
#define strModificationParticipant @"MODIFICATION PARTICIPANT"
#define strParticipation @"Participation"
#define strSUPPRIMER @"SUPPRIMER"
#define strParametresUtilisateurs @"PARAMETRES UTILISATEURS"
#define strDISCUSSION @"DISCUSSION"
#define strDISCUSSIONS @"DISCUSSIONS"

#define strDiscussionsGroupes @"DISCUSSIONS GROUPES"
#define strDiscussionsChasses @"DISCUSSIONS CHASSES"
#define strToutesLesDiscussions @"TOUTES LES DISCUSSIONS"
#define strToutesLesDiscussionsDeGroupes @"TOUTES LES DISCUSSIONS DES GROUPES"
#define strToutesLesDiscussionsDeChasses @"TOUTES LES DISCUSSIONS DES CHASSES"
#define strPUBLICATION @"PUBLICATION"
#define strRecherchezQuelquun @"Recherchez quelqu'un"
#define strMUR @"MUR"
#define strVouloirSupprimerCeMessage @"Etes-vous sûr de vouloir supprimer ce message ?"
#define strNon @"Non"
#define strAjouterUnCommentaire @"Ajouter un commentaire"
#define strSignaler @"Signaler"
#define strModifier @"Modifier"
#define strSupprimer @"Supprimer"
#define strVouloirSupprimerCettePublication @"Êtes-vous sûr de vouloir supprimer cette publication ?"
#define strVouloirSupprimerCetteComment @"strVouloirSupprimerCetteComment"

#define strTOUS @"TOUS"
#define strFiltrezLesPointsQueVousImprotez @"FILTREZ LES POINTS QUE VOUS IMPORTEZ"
#define strChoisissezLesPointsdeGeo @"Choisissez les points de géolocalisation que vous voulez importer."
#define strTypeDePointGeo @"TYPE DE POINT GEOLOCALISER"
#define strVeuilezSelectionnerPointGeo @"Veuilez selectionner le type de point geolocaliser que vous souhaitez importer."
#define strAjouterCetEvenementDansLagenda @"Voulez-vous ajouter cet événement dans l’agenda d’un de vos groupes?"
#define strOUI @"OUI"
#define strNON @"NON"
#define strRecuperationMotDePasse @"RÉCUPÉRATION MOT DE PASSE"
#define strRenseignerVotreAdresseEmail @"Veuillez renseigner votre adresse email"
#define strVotreAdresseEmail @"Votre adresse email"
#define strAJOUTER @"AJOUTER"
#define strADMINISTRATEUR @"ADMINISTRATEUR"
#define strEXCLUREDESMEMBRES @"EXCLURE DES MEMBRES"

#define strInformationSubLeGroupe @"INFORMATIONS SUR LE GROUPE"
#define strNomDuGroupe @"Nom du groupe"
#define strDescriptionDeVotreGroupe @"Description de votre groupe"
#define strTypeDeGroupe @"TYPE DE GROUPE"
#define strInviterDesMembres @"INVITER DES MEMBRES"
#define strPersonnesArejoindreVotreGroupe @"Vous pouvez inviter des personnes à rejoindre votre groupe."


#define strMessageAccessPrivate @"Seules les personnes invitées dans votre groupe pourront accéder à votre groupe et en connaîtront l'existence."

#define strMessageAccessSemiPrivate @"Tous les natiz auront accès à votre groupe, mais vous validerez chaque nouvelle inscription.\nVotre groupe sera visible par tout le monde dans la rubrique \"Tous les groupes\"."

#define strMessageAccessPublication @"Tous les natiz auront accès à votre groupe sans restriction. Votre action se limitera à exclure d'éventuels membres indésirables.\nVotre groupe sera visible par tout le monde dans la rubrique \"Tous les groupes\"."
#define strPRIVE @"PRIVÉ"
#define strSEMIPRIVE @"SEMI-PRIVÉ"
#define strPPUBLIC @"PPUBLIC"
#define strPourInviterDesAmisRejoindreVotreGroupe @"Pour inviter des amis à rejoindre votre groupe, veuillez les selectionner."
#define strInviterPersonnesGroup @"INVITER DES PERSONNES DANS VOTRE NOUVEAU GROUPE"
#define strIciVousPouvezInviter @"Ici vous pouvez inviter :"
#define strIensembleDesMembresGroup @"- I'ensemble des membres d'un de vos groupes en cliquant sur Envoyer."
#define strSeulementCertainsMembresGroup @"- seulement certains membres de ces groupes en cliquant sur Membres."
#define strMEMBERS @"MEMBRES"
#define strENVOYERATOUS @"ENVOYER A TOUS"
#define strRentrezLeurNome @"Pour inviter des membres Naturapass à rejoindre votre groupe, rentrez leur nom."
#define strContentNonValide @"Content non valide"
#define strAdministrationDuGroupe @"ADMINISTRATION DU GROUPE"
#define strInformations @"Informations"
#define strQuiPeutPublier @"Qui peut publier"
#define strQuiPeutConsulter @"Qui peut consulter"
#define strTypeDacces @"Type d'accès"
#define strInviterDeMembres @"Inviter des membres"
#define strGererLesAdminstrateours @"Gérer les administrateurs"
#define strExclureDesMembres @"Exclure des membres"
#define strREPORT @"REPORT"
#define strInfosAgenda @"Infos agenda"
#define strInfosGroupe @"Infos groupe"
#define strGererLesAdmin @"Gérer les administrateurs"
#define strLesMenbres @"Les membres"
#define strExclureDeMembres @"Exclure des membres"
#define strPersonnesEnAttenteDeVotreValidation @"PERSONNES EN ATTENTE DE VOTRE VALIDATION"
#define strVosDemandesDaccesEnAttent @"VOS DEMANDES D'ACCÈS EN ATTENTE"
#define strRefuser @"REFUSER"
#define strMESGROUPES @"MES GROUPES"
#define strRechercher @"Rechercher"
#define strSearchGroup @"SEARCHGROUP"

#define strAlertCheckEmptyGroupMes @"Votre réseau n'est pas assez bon pour charger la liste de vos groupes. Veuillez réessayer quand vous aurez une meilleure connexion."
#define strDelete_group_content @"delete_group_content"
#define strDelete_group_title @"delete_group_title"
#define strLeave_group_content @"leave_group_content"
#define strDesinscription_Du_Group @"Désinscription du groupe"
#define strAdministrer @"Administrer"
#define strFermer_le_groupe @"Fermer le groupe"
#define strNOTIFICATIONS_SMARTPHONE @"NOTIFICATIONS SMARTPHONE"

#define strDemande_de_validation_de_participation_roup @"Demande de validation de participation à un group"
#define strRefus_de_participation @"Refus de participation"
#define strReponse_commentaire_publication @"Réponse à un commentaire sur une publication"
#define strNouveau_jaime_publication @"Nouveau j'aime sur une publication"
#define strNouveau_commentaire_sur_votre_publication @"Nouveau commentaire sur votre publication"
#define strInvitation_de_participation_groupe @"Invitation de participation à un groupe"
#define strDemande_de_participation_groupe @"Demande de participation à un groupe"
#define strAcceptation_de_participation_groupe @"Acceptation de participation à un groupe"
#define strTOUS_LES_GROUPES @"TOUS LES GROUPES"

#define strTo_Commit @"To Commit"
#define strOn_hold @"On hold"
#define strAAccess @"Access"
#define strSinscrire @"S'inscrire"
#define strVous_avez_ete_invite_dans_ce_group @"Vous avez été invité dans ce group. Voulez-vous accepter l'invitation ?"

#define strPRIVATE @"PRIVATE"
#define strSEMIPRIVATE @"SEMIPRIVATE"
#define strPUBLIC @"PUBLIC"

#define strMEMBRES_DU_GROUPE @"MEMBRES DU GROUPE"
#define strProprietaire @"Proprietaire"
#define strAdministrateurs @"Administrateurs"
#define strMMembres @"Membres"
#define strIInvites @"Invités"
#define strEn_attente_de_validation @"En attente de validation"
#define strMODIFIER_VOTRE_PUBLICATION @"MODIFIER VOTRE PUBLICATION"
#define strFILTRE @"FILTRE"
#define strMES_ADRESSES_FAVORITES @"MES ADRESSES FAVORITES"

#define strPartage_par_defaut @"Partage par défaut"
#define strAmis_visible @"Amis visible"
#define strNATIZ_QUI_AIMENT_VOTRE_PUBLICATION @"NATIZ QUI AIMENT VOTRE PUBLICATION"
#define strPublication @"Publication"
#define strNotifications_email @"Notifications email"
#define strNotifications_smartphones @"Notifications smartphones"
#define strAdresses_favorites @"Adresses favorites"
#define strPublications_favorites @"Publications favorites"

#define strLa_demande_a_expire @"La demande a expiré."
#define strNOTIFICATIONS @"NOTIFICATIONS"
#define strMES_FAVORIS @"MES FAVORIS"
#define strMes_adresse_favorites @"Mes adresse favorites"
#define strMes_publications_favorites @"Mes publications favorites"
#define strMES_PUBLICATIONS_FAVORITES @"MES PUBLICATIONS FAVORITES"
#define strMON_PROFIL @"MON PROFIL"
#define strCivilite @"Civilité (fac.)"
#define strPrenom @"Prénom"
#define strEEmail @"Email"
#define strDate_de_naissance @"Date de naissance"
#define strNOTIFICATIONS_EMAIL @"NOTIFICATIONS EMAIL"

#define strCHANGER_DE_MOT_DE_PASSE @"CHANGER DE MOT DE PASSE"
#define strMot_de_passe_actuel @"Mot de passe actuel"
#define strNouveau_mot_de_passe @"Nouveau mot de passe"
#define strVerification @"Vérification"
#define strUpdate_Alert @"Update_Alert"
#define strPassword_Alert @"Password_Alert"
#define strOldPassword_Alert @"OldPassword_Alert"
#define strMA_PHOTO_DE_PROFIL @"MA PHOTO DE PROFIL"
#define strMODIFIER @"MODIFIER"
#define strPROFIL @"PROFIL"
#define strGENERAL @"GENERAL"
#define strPProfil @"Profil"
#define strGGeneral @"Général"
#define strFFavoris @"Favoris"
#define strUn_email_envoye @"Un email a été envoyé  à votre adresse électronique"
#define strChoose_Avatar @"Choose_Avatar"
#define strTake_Photo @"Take_Photo"
#define strChoose_Library @"Choose_Library"
#define strCancel @"Cancel"
#define strSorry_No_Camera @"Sorry_No_Camera"
#define strPublier_une_photo @"Publier une photo"
#define strPrendre_une_photo @"Prendre une photo"
#define strChoisir_dans_la_bibliotheque @"Choisir dans la bibliothèque"
#define strAAnnuler @"Annuler"
#define strAjout_de_la_specification_aux_favorisr @"Ajout de la spécification aux favoris"
#define strNom_du_favori @"Nom du favori"
#define strENREGISTRER @"ENREGISTRER"
#define strAlert_Message @"Alert_Message"
#define strNName @"Name"
#define strVotre_wifi_nest_pas_active @"Votre wifi n'est pas activé. Pour plus de précision de votre géolocalisation, veuillez l'activer."
#define strGERER_MON_PARTAGE @"GÉRER MON PARTAGE"
#define strAAmis @"Amis"
#define strTous_les_natiz @"MEMBER"
#define strPARTAGER_AVEC @"PARTAGER AVEC"
#define strSentinelle @"Sentinelle"
#define strPrecisez_sur_quoi_porte_votre_observation @"Précisez sur quoi porte votre observation"
#define strPlus_danimaux @"Plus d'animaux"
#define strElargir_la_selection @"Elargir la sélection"
#define strIl_ny_a_pas_danimaux_dans_notre_base @"Il n'y a pas d'animaux dans notre base qui correspondent à votre recherche.\nVeuillez ré-essayer.\nPour rappel, notre base ne contient que les mammifères et les oiseaux."
#define strChoisir_une_fiche @"-- Choisir une fiche --"
#define strSouhaitezvous_utiliser_un_favori @"Souhaitez-vous utiliser un favori ?"
#define strSelectionnez_la_couleur_de_votre_repere @"Sélectionnez la couleur de votre repère"
#define strFacultatif @"(facultatif)"
#define strSelectionnez_les_informations @"Sélectionnez les informations que vous voulez garder en mémoire"
#define strLegende @"Legende"
#define strCouleur @"Couleur"
#define strPrecisions @"Précisions"
#define strFiche @"Fiche"
#define strPartage @"Partage"
#define strMoi @"Moi"
#define strGroupes @"Groupes"
#define strAAgenda @"Agenda"
#define strFAVORIS @"FAVORIS"
#define strRetrouvez_ici_toutes_vos_informations @"Retrouvez ici toutes vos informations, vous pouvez les modifier"
#define strPour_gerer_vos_adresses favorites @"Pour gérer vos adresses favorites, rendez-vous dans les paramètres \nen cliquant ici"
#define strEntrez_une_legende_qui_apparaitra_sur_la_carte @"Entrez une légende qui apparaitra sur la carte"
#define strLegende_carte @"Légende carte"
#define strSuppression_favori @"Suppression favori"
#define strSupprimer_ce_favori_de_vos_publications_favorites @"Etes-vous sûr de vouloir supprimer ce favori de vos publications favorites?"
#define strVotre_publication_succes @"Votre publication a été créée avec succès"

#define strVous_pouvez_suivre_son_avancement @"Vous pouvez suivre son avancement en cliquant sur l'icone        de la barre"
#define strAJOUTER_AUX_FAVORIS @"   AJOUTER AUX FAVORIS"
#define strVoulezvous_partager_cette_publication @"Voulez-vous partager cette  publication ?"
#define strVous_garderez_cette_publication_pour @"Si \"non\", vous garderez cette publication pour vous.\nOn a le droit d'avoir ses secrets !"
#define strVoulezvous_preciser_votre_publication @"Voulez-vous préciser\nvotre publication ?"
#define strExemple_mirador @"Exemple : mirador à réparer, tir de sanglier, dégâts de nuisible..."
#define strEntre_un_nom_pour_votre_adresse @"Entre un nom pour\nvotre adresse"
#define strEx_Cabane_de_agenda @"Ex: Cabane de agenda"

#define strVeuillez_entrer_une_adresse @"Veuillez entrer une adresse."
#define strPUBLIER_UN_MESSAGE @"PUBLIER UN MESSAGE"
#define strTapez_votre_texte @"Tapez votre texte..."

#define strEmail_Address @"Email_Address"
#define strFirstName @"FirstName"
#define strPPassword @"Password"
#define strChoose_Civility @"Choose_Civility"
#define strRegister_Title @"Register_Title"
#define strRegister_Condition @"Register_Condition"
#define strChoose_Photo @"Choose_Photo"
#define strChange @"Change"

#define strINVALIDEMAIL @"INVALIDEMAIL"

#define strImage_Missing @"Image-Missing"
#define strERROR @"ERROR"
#define strCGU_unchecked @"CGU_unchecked"
#define strRegistered_Successfully @"Registered Successfully"
#define strDONE @"DONE"
#define strCivilite0 @"Civilite0"
#define strCivilite1 @"Civilite1"
#define strCivilite2 @"Civilite2"
#define strVotre_demande_envoyee @"Votre demande a été envoyée"
#define strChasse_de_vos_pratiques @"Etes-vous sûr de vouloir supprimer ce type de chasse de vos pratiques?"
#define strVouloir_supprimer_ce_type_de_chasse @"Etes-vous sûr de vouloir supprimer ce type de chasse ?"
#define strAMIS @"AMIS"
#define strAIDE @"AIDE"
#define strDDescription @"Description"
#define strAnnuler_Groups @"Annuler Groups"


#define strINVITEZ_DES_NON_MEMBRES_NATURAPASS @"INVITEZ DES NON-MEMBRES NATURAPASS"
#define strPour_les_personnes_qui_ne_sont_pas_inscrites @"Pour les personnes qui ne sont pas inscrites à Naturapass, vous pouvez leur envoyer un email pour les prévenir."

#define strRateAppStore @"Merci de donner votre avis sur Naturapass sur Appstore."
#define strPreciser_au_mieux_votre_profil_vous_permettra @"Naturapass vous permet de rencontrer d'autres Natiz. Préciser au mieux votre profil vous permettra de faire marcher au mieux cette fonctionnalité."

#define strQuel_type_de_chasse_pratiquez @"QUEL TYPE DE CHASSE PRATIQUEZ-VOUS? \n"
#define strQuel_type_de_chasse_aimeriez @"QUEL TYPE DE CHASSE AIMERIEZ-VOUS PRATIQUER?\n"
#define strDans_quels_pays_chassez @"DANS QUELS PAYS CHASSEZ-VOUS OU AVEZ-VOUS CHASSÉ? \n"
#define strSuppression_dune_ville @"Suppression d'une ville"
#define strVouloir_supprimer_cette_ville @"Etes-vous sûr de vouloir supprimer cette ville?"

#define strSuppression_dun_pays @"Suppression d'un pays"
#define strSupprimer_ce_pays_de_vos_pays_de_chasse @"Etes-vous sûr de vouloir supprimer ce pays de vos pays de chasse?"
#define strVouloir_supprimer_cette_ville @"Etes-vous sûr de vouloir supprimer cette ville?"

#define strVouloir_supprimer_cette_ville @"Etes-vous sûr de vouloir supprimer cette ville?"

#define strMes_amis @"Amis"
#define strAutres_Natiz @"Autres Natiz"
#define strNon_Natiz @"Non-Natiz"
#define strJe_participe @"Je participe"
#define strJe_ne_sais_pas @"Je ne sais pas"
#define strJe_ne_participe_pas @"Je ne participe pas"
#define strENVOYE @"ENVOYÉ"
#define strVous_avez_envoye_invitation @"Vous avez envoyé %d invitation."
#define strVous_avez_envoyer_invitations @"Vous avez envoyer %d invitations."
#define strOther_peoples @"other peoples"
#define strValider_votre_liste @"Valider votre liste"
#define strAppuyez_sur_le_bouton @"Appuyez sur le bouton \"suivant\" pour inviter les personnes selectionnées."

#define strTapez_votre_texte_personnalise_ici @"Tapez votre texte personnalisé ici"
#define strINVITEZ_DES_AMIS @"INVITEZ DES AMIS"
#define strRedigez_un_message_personnalise @"Rédigez un message personnalisé pour vos amis ou laisser le message par défaut."
#define strLenvoi_de_vos_invitations @"L'envoi de vos invitations s'est fait avec succes"
#define strTermine @"Terminé"
#define strINVALID_ERROR @"INVALID_ERROR"
#define strVous_navez_ni_demande_lacces @"Vous n'avez ni demandé l’accès à  un événement, ni reçu d'invitation"
#define strAdministre_par @"Administré par"
#define strPersonnes_en_attente_de_validation @"Personnes en attente de validation"
#define strPersonne_en_attente_de_validation @"Personne en attente de validation"
#define strAdministrateur @"Administrateur"

#define strNon_membres @"Non-membres"
#define strA_VALIDER @"À VALIDER"
#define strEN_ATTENTE @"EN ATTENTE"
#define strACCEDER @"ACCÉDER"
#define strREJOINDRE @"REJOINDRE"
#define strParticipants @"participants"
#define strCommentaire_sur_votre_publication @"Commentaire sur votre publication"
#define strResponse_a_votre_commentaire @"Résponse à votre commentaire"
#define strInvitation_pour_etre_ami @"Invitation pour etre ami"

#define strInvitation_rejoindre_un_group @"Invitation à rejoindre un group"
#define strNouvelle_publication_dans_un_group @"Nouvelle(s) publication(s) dans un group"

#define strConfirmation_d_amitie @"Confirmation d amitie"
#define strDemande_d_amitie @"Demande d amitie"
#define strReponse_commentaire_sur_une_publication @"Reponse a un commentaire sur une publication"
#define strNouveau_aime_sur_une_publication @"Nouveau j aime sur une publication"
#define strQUI_PEUT_PUBLIER @"QUI PEUT PUBLIER?"
#define strVous_pouvez_limiter_la_publication_agenda @"Habituellement, tout le monde peut publier dans un agenda, mais si besoin, vous pouvez limiter la publication aux administrateurs. Pour ajouter des administrateurs, allez dans les paramètres du agenda."

#define strQUI_PEUT_CONSULTER @"QUI PEUT CONSULTER?"
#define strVous_pouvez_limiter_la_consultation_agenda @"Habituellement, tout le monde peut consulter dans un agenda, mais si besoin, vous pouvez limiter la consultation aux administrateurs. Pour ajouter des administrateurs, allez dans les paramètres du agenda."
#define strTOUS_LES_MEMBRES @"TOUS LES MEMBRES"
#define strADMINISTRATEURS @"ADMINISTRATEURS"
#define strInscription_manuelle @"Inscription manuelle"
#define strEnvoi_demails @"Envoi d'emails"
#define strIMPORTER_DES_POINTS_GEOLOCALISES @"IMPORTER DES POINTS GEOLOCALISES"
#define strImporter_point_de_geolocalisation @"Sélectionnez le groupe dont vous voulez importer les point de géolocalisation."

#define strType_point_geolocaliser_que_vous_souhaitez_importer @"Veuillez selectionner le Type de point geolocaliser que vous souhaitez importer"
#define strSelectionner_une_partie_de_cette_specification @"Vous pouvez selectionner une partie de cette specification"
#define strVivant @"Vivant"
#define strTraces_empreintes @"Traces empreintes"
#define strBlesses @"Blessés"
#define strThis_publication_has_content_issue @"This publication has content issue!"
#define strERRORTITLE @"ERRORTITLE"
#define strERRORDESCRIPTION @"ERRORDESCRIPTION"
#define strINCONVIENINENCE @"INCONVIENINENCE"
#define strSupprimer_de_votre_damis @"Etes-vous sûr de vouloir supprimer %@ de votre liste d'amis?"
#define strAmis_de @"Amis de"
#define strAmis_en_commun_avec @"Amis en commun avec"
#define strRejoindre_un_group_public @"Rejoindre_un_group_public"
#define strRejoindre_un_group @"Rejoindre_un_group"
#define strVous_pouvez_limiter_la_publication_group @"Habituellement, tout le monde peut publier dans un groupe, mais si besoin, vous pouvez limiter la publication aux administrateurs. Pour ajouter des administrateurs, allez dans les paramètres du groupe."
#define strVous_pouvez_limiter_la_consultation_group @"Habituellement, tout le monde peut consulter dans un groupe, mais si besoin, vous pouvez limiter la consultation aux administrateurs. Pour ajouter des administrateurs, allez dans les paramètres du groupe."
#define stramis_en_commun @"amis en commun"
#define strLogin_Title @"Login_Title"
#define strForgot_Password @"Forgot_Password"
#define strOr @"Or"
#define strReset_Connection @"Reset-Connection"
#define strLogin @"Login"
#define strRegister @"Register"
#define strVoulez_vous_blacklister @"Voulez-vous blacklister \n %@. \n\nVous ne verrez plus ses publications sur le mur. Vous pourrez l'enlever de votre liste noire en vous rendant dans paramètres."
#define NO_FAV_PUBLICATION @"Vous n'avez actuellement aucun publication favorite"
#define strOU_CHASSEZ_VOUS @"OÙ CHASSEZ-VOUS ?\n\n"
#define strMoteur_de_recherche_des_villes @"Moteur de recherche des villes"
#define strMoteur_de_recheche_pays @"Moteur de recherche pays"

#define strVOS_CHIENS @"VOS CHIENS"
#define strVOS_ARMES @"VOS ARMES"
#define strVOS_PAPIERS @"VOS PAPIERS"
#define strVouloir_supprimer_ce_chien @"Etes-vous sur de vouloir supprimer ce chien"
#define strVouloir_supprimer_cette_arme @"Etes-vous sur de vouloir supprimer cette arme"
#define strVouloir_supprimer_les_informations_liees_papier @"Etes-vous sur de vouloir supprimer les informations liées à ce papier"
#define strVoir @"Voir"

#define strAjout_ou_modification_chien @"Ajout ou modification d'un chien"
#define strModification_arme @"Modification d'une arme"
#define strAjout_arme @"Ajout d'une arme"
#define strSexe @"Sexe"
#define strFemale @"Female"
#define strMale @"Male"
#define strTType @"Type"
#define strCarabine @"Carabine"
#define strFusil @"Fusil"
#define strNom_de_larme @"Nom de l'arme"
#define strMarque @"Marque"
#define strCalibre @"Calibre"
#define strRace @"Race"
#define strEtes_vous_sur_de_vouloir_supprimer @"Etes-vous sur de vouloir supprimer ?"

#define strNom_du_chien @"Nom du chien"
#define strModification_dun_papier @"Modification d'un papier"
#define strAjout_dun_papier @"Ajout d'un papier"
#define strEntrer_un_texte @"Entrer un texte"
#define strRACE @"Race"
#define strSEXE @"Sexe"
#define strDATE_DE_NAISANCE @"Date de naisance"
#define strTYPE @"Type"
#define strBRAND @"Brand"
#define strCALIBRE @"Calibre"
#define strFEMALE @"Female"
#define strMALE @"Male"

#define strPRENDRE_UNE_PHOTO @"PRENDRE UNE PHOTO"
#define strPRENDRE_UNE_VIDEO @"PRENDRE UNE VIDÉO"
#define strCHOISIR_DANS_MA_BIBLIOTHEQUE @"CHOISIR DANS MA BIBLIOTHÈQUE"
#define strVeuillez_remplir_le_champs @"Veuillez remplir le champs \"%@\" qui est obligatoire."
#define strMMembre @"membre"
#define strEt_un_autre_membre @"et un autre membre"
#define strPOSTVIDEO @"POSTVIDEO"
#define strFilmer_une_video @"Filmer une video"
#define strVotre_publication_modifiee @"Votre publication a été modifiée."
#define strVoulez_vous_faire_modifications @"Voulez-vous faire d'autres modifications ?"
#define strBlacklister @"Blacklister"

#define strMenu_item_Blacklister @"Menu_item_Blacklister"
#define strVoulez_vous_vraiment_supprimer @"Voulez-vous vraiment supprimer cet élément?"
#define strAmi @"ami"
#define strMessages_limites_aux_administrateurs @"strMessages_limites_aux_administrateurs"
#define strMembres_blacklister @"Membres blacklister"
#define strMEMBRES_BLACKLISTER @"MEMBRES BLACKLISTER"
#define strDELETE_BLACKLISTER @"DELETE_BLACKLISTER"
#define strTryAgainRequest @"strTryAgainRequest"
#define strWarningNoBlocker @"strWarningNoBlocker"
#define strZeroInvitaionGroup @"strZeroInvitaionGroup"
#define strZeroInvitaionAmis @"strZeroInvitaionAmis"
#define strDownload @"Download"
#define strNewVertionAvailale @"strNewVertionAvailale"
#define strIgnore @"Ignore"
#define strNewInThisVersion @"strNewInThisVersion"
#define strChooseRefreshMap @"strChooseRefreshMap"
#define strActualiserLaCarte @"strActualiserLaCarte"
//empty
#define EMPTY_MUR @""

#define EMPTY_GROUP_MES @"Vous n'avez actuellement aucun groupe."
#define EMPTY_GROUP_PUBLICATION @"Aucune publication pour l'instant.\nSerez-vous le premier?"
#define EMPTY_GROUP_INVITE @" Vous n'avez aucune demande actuellement."
#define EMPTY_GROUP_AGENDA @"Aucun événement est prévu pour l'instant.\nA vous d'en organiser un!"
#define EMPTY_GROUP_TOUS @""
#define EMPTY_CHASSE_MES @"Vous ne participez à aucun événement.\nC'est le moment d'en créer un ou de vous faire inviter."
#define EMPTY_CHASSE_PUBLICATION @"Aucune publication pour le moment.\nAllez-y, publiez!"
#define EMPTY_CHASSE_PASS @""
#define EMPTY_CHASSE_INVITE @"Vous n'avez aucune demande actuellement."
#define EMPTY_CHASSE_TOUS @""

#define EMPTY_DISCUSTION @"Aucun message. Des chasseurs non bavards ???"
#define MINIMUM_LETTRES @"Veuillez taper minimum 4 lettres pour faire une recherche"
#define VAR_MINIMUM_LETTRES 4
#define MAX_MESSAGE 200

#define str_NO_GROUP_MATCH_SEARCH @"Il n'y a pas de groupe qui correspond à votre recherche"

#define strOtherPeople @"strOtherPeople"
#define strFilterPublication @"strFilterPublication"
#define strFilterPublicationOfCarte @"strFilterPublicationOfCarte"
#define strFiltrerSurQUI @"strFiltrerSurQUI"
#define strFiltrerSurQUOI @"strFiltrerSurQUOI"
#define strFiltrerSurQUAND @"strFiltrerSurQUAND"
#define strDescriptionQUI @"strDescriptionQUI"
#define strDescriptionQUOI @"strDescriptionQUOI"
#define strDescriptionQUAND @"strDescriptionQUAND"
#define strDerniersJours @"strDerniersJours"
#define F_Moi 0
#define F_Amis 6
#define F_Moi_Amis 5
typedef enum {
    EDIT_TEXT =0,
    EDIT_CARTE=1,
    EDIT_LEGEND=2,
    EDIT_PRECISIONS=3,
    EDIT_PARTAGE=4,
    EDIT_COLOR=5,
} EDIT_PUBLICATION_TYPE;

typedef enum {
    USER_INVITED =0,
    USER_WAITING_APPROVE=1,
    USER_NORMAL=2,
    USER_ADMIN=3,
    USER_REJOINDRE=4
} USER_KIND;
typedef enum
{
    ACCESS_PRIVATE =0,
    ACCESS_SEMIPRIVATE =1,
    ACCESS_PUBLIC =2
    
}ACCESS_KIND;
typedef enum
{
    NOT_FRIEND =0,
    WAIT_FRIEND =1,
    IS_FRIEND   =2
}ISFRIEND_KIND;

typedef enum{
    TYPE_MESSAGE =0,
    TYPE_PHOTO,
    TYPE_VIDEO,
    TYPE_RESET
} MEDIATYPE;

typedef enum {
    ISLOUNGE = 0,
    ISGROUP,
    ISHOME,
    ISMUR,
    ISCARTE,
    ISAMIS,
    ISDISCUSS,
    ISFROM_CREATE_SPECIAL,
    ISFROM_SETTING_MEMBRES,
    ISPARAMTRES,
    ISMUR_FAV,
    ISDEFAULT,
    ISLIVEMAP
}ISSCREEN;

//Type Map profile view
typedef enum {
    CITY = 0, //city
    COUNTRY,//country
    TYPE_CHASSE,//type hunt
    HUNT_PRACTICED,
    HUNT_LIKED,
    TYPE_DOG,
    TYPE_WEAPONS,
    TYPE_PAPER
}TYPE_VIEW;

typedef enum {
    PAPER_TYPE_ALL=0,
    PAPER_TYPE_MEDIA,
    PAPER_TYPE_MEDIA_NAME,
    PAPER_TYPE_MEDIA_TEXT
}PAPER_TYPE;

typedef enum
{
    ISNUMBER =0,
    ISFLOAT
}FORMAT_NUMBER;
typedef enum {
    NON_CHECK =0,
    UN_CHECK=1,
    IS_CHECK=2,
} CARTER_CHECK;

typedef enum {
    map_n,
    map_ne,
    map_e,
    map_se,
    map_s,
    map_sw,
    map_w,
    map_nw

}VENT_DIRECTION;

typedef enum
{
    LOAD_PREVOUS,
    LOAD_CURRENT,
    LOAD_MORE,
}STATE_LOAD;

typedef enum {
    FAV_LEGENDE,
    FAV_COULEUR,
    FAV_PRECISIONS,
    FAV_FICHE,
    FAV_FICHE_CHILD,
    FAV_PARTAGE,
    FAV_GROUPS,
    FAV_GROUPS_CHILD,
    FAV_HUNTS,
    FAV_HUNTS_CHILD,
    FAV_USERS,
    FAV_USERS_CHILD

}FAVORIS_TYPE;

typedef enum
{
    CONTROL_CHECKBOX=0,
    CONTROL_RADIO,
}TYPE_CONTROL;

typedef enum
{
    ALL=0,
    PUBLICATION,
    SHAPE,
    GROUP,
    HUNT,
    DISTRIBUTOR,
    ADDRESS,
    FAVORITES
}TYPE_SQLITES;

typedef enum
{
    NUMBER_INT=0,
    NUMBER_FLOAT,
}TYPE_NUMBER;

typedef enum
{
    GROUP_CAN_ADD=0,
    GROUP_CAN_SHOW,
}GROUP_CREATE_ADD_VIEW;


typedef enum
{
    PUBLICATION_ALLOW_AGENDA=0,
    CHAT_ALLOW_AGENDA,
}AGENDA_CREATE_ADD_VIEW;


typedef enum
{
    UPLOAD_NOT_YES=0,
    UPLOAD_UPLOADING,
    UPLOAD_FAIL,
    UPLOAD_SUCCESS,
}UPLOAD_STATUS;
typedef enum
{
    MARKER_PUBLICATION=1,
    MARKER_DISTRIBUTRION,
    MARKER_AGENDA,
    MARKER_LEGEND,

}MARKERS_TYPE;

typedef enum
{
    VIEW_ACTION_REFRESH_TOP,
    VIEW_ACTION_REFRESH_BOTTOM,
    VIEW_ACTION_UPDATE_DATA,

}VIEW_ACTION_TYPE;
typedef enum
{
    SHORTCUT_ACTION_VENT = 1,
    SHORTCUT_ACTION_METEO,
    SHORTCUT_ACTION_FAVORIS,
    SHORTCUT_ACTION_MAPTYPE,
    SHORTCUT_ACTION_PRINT,
    SHORTCUT_ACTION_SEARCH,
    SHORTCUT_ACTION_RADAR,
    SHORTCUT_ACTION_ADD_FIREND,
    SHORTCUT_ACTION_CREATE_AGENDA,
    SHORTCUT_ACTION_CREATE_GROUP,
    SHORTCUT_ACTION_DISCUSTION,
    SHORTCUT_ACTION_CREATE_PUBLICATION,
    
}SHORTCUT_ACTION_TYPE;

typedef enum {
    DateYesterday,
    DateThisWeek,
    DateLastWeek,
    DateThisMonth,
    DateLastMonth,
    DateThisYear,
    DateLastYear,
    DateLast30,

    DateToday
} DateType;
typedef enum
{
    FILTER_QUI=1,
    FILTER_QUOI,
    FILTER_QUAND,
    FILTER_MOI,
    FILTER_AMIS,
    FILTER_AGENDA,
    FILTER_GROUP,
    FILTER_PERSION,
    FILTER_ADDMORE,

}FILTER_TYPE;
typedef enum
{
    FILTER_CELL_0,
    FILTER_CELL_1,
    FILTER_CELL_2,
    FILTER_CELL_3,
    FILTER_CELL_4,
    FILTER_CELL_5,
    FILTER_CELL_6,
    FILTER_CELL_7,
    FILTER_CELL_8,
    FILTER_CELL_9,
    
}FILTER_CELL;
typedef enum
{
    INPUT_TYPE_FIND=1,
    INPUT_TYPE_DATE=2,
}INPUT_TYPE;
typedef enum
{
    ALLOW_VIEW,
    ALLOW_ADD,
    ALLOW_FIND,
    
}ALLOW_TYPE;
typedef enum
{
    DATE_TODAY=1,
    DATE_YESTERDAY,
    DATE_THISWEEK,
    DATE_LASTWEEK,
    DATE_THISMONTH,
    DATE_LASTMONTH,
    DATE_THISYEAR,
    DATE_LASTYEAR,
    DATE_LAST30,
    DATE_PERSONNALISER
}FILTER_DATE;

typedef enum
{
    ARROW_NONE=0,
    ARROW_AGENDA,
    ARROW_GROUP,
}ARROW_TYPE;

#define SHAPE_TYPE_POLYGON @"polygon"
#define SHAPE_TYPE_POLYLINE @"polyline"
#define SHAPE_TYPE_CIRCLE @"circle"
#define SHAPE_TYPE_RECTANGLE @"rectangle"

//MAP
#define UPDATE_OBJ_NOTIFICATION @"UPDATE_OBJ_NOTIFICATION"
#define HIDE_INDICATOR_OBJ_NOTIFICATION @"HIDE_INDICATOR_OBJ_NOTIFICATION"

#define SHOW_TITLE_SHAPE_NOTIFICATION @"SHOW_TITLE_SHAPE"


//VCam
#define Def_beginAngle 180+75
#define Def_endAngle  180+105

static const CGFloat MDMarkersSizeWidth = 29;// 29;

static const CGFloat MDMarkersSizeHeight = 32;//32;

static const CGFloat MDMarkersSmallSizeWidth = 8;

static const CGFloat MDMarkersSmallSizeHeight = 10;

static const CGSize MDMarkersSize = {MDMarkersSizeWidth, MDMarkersSizeHeight};
static const CGSize MDMarkersSmallSize = {MDMarkersSmallSizeWidth, MDMarkersSmallSizeHeight};

#endif
