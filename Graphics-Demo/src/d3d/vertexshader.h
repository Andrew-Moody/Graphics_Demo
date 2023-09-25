#pragma once
#include "ibindable.h"

#include <wrl/client.h>

#include <vector>

struct ID3D11VertexShader;

namespace d3d
{
	class D3DApp;
	class InputLayout;

	class VertexShader : public IBindable
	{
	public:

		void bind(D3DApp& app) override;

		VertexShader(D3DApp& app, const std::vector<uint8_t>& byteCode);

		VertexShader() = default;

	private:

		InputLayout* m_inputLayout{};

		Microsoft::WRL::ComPtr<ID3D11VertexShader> m_vertexShader{};
	};
}