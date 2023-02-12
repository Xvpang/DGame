// Fill out your copyright notice in the Description page of Project Settings.


#include "LobbyUI.h"

#include "Components/Button.h"



void ULobbyUI::OnSingleButtonClicked()
{
}

void ULobbyUI::OnCreateLanButtonClicked()
{
}

void ULobbyUI::OnFindLanButtonClicked()
{
}

void ULobbyUI::OnCreateDsButtonClicked()
{
}

void ULobbyUI::OnJoinDsButtonClicked()
{
}

void ULobbyUI::NativeOnInitialized()
{
	Super::NativeOnInitialized();
	SingleButton->OnClicked.AddDynamic(this, &ULobbyUI::OnSingleButtonClicked);
	
	CreateLanButton->OnClicked.AddDynamic(this, &ULobbyUI::OnCreateLanButtonClicked);
	FindLanButton->OnClicked.AddDynamic(this, &ULobbyUI::OnFindLanButtonClicked);
	
	CreateDSButton->OnClicked.AddDynamic(this, &ULobbyUI::OnCreateDsButtonClicked);
	JoinDSButton->OnClicked.AddDynamic(this, &ULobbyUI::OnJoinDsButtonClicked);
}



